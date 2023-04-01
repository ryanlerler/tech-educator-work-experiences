import pygame
import random


# Set up the Enemy class
class Enemy():
    # Enemy constructor function
    def __init__(self, x, y, speed, size):
        self.x = x
        self.y = y
        self.speed = speed
        self.size = size
        self.pic = pygame.image.load("./assets/fish03.png")
        self.hitbox = pygame.Rect(self.x + self.size / 10, self.y + self.size / 10,
                                  self.size - self.size / 5, self.size - self.size / 5)
        # shrink the enemy pic
        self.pic = pygame.transform.scale(self.pic, (self.size, self.size))
        # Flip the pic if the enemy is moving to the left
        if self.speed < 0:
            self.pic = pygame.transform.flip(self.pic, True, False)

    def update(self, screen):
        self.x += self.speed
        self.hitbox.x += self.speed
        #pygame.draw.rect(screen, (0, 255, 255), self.hitbox)
        screen.blit(self.pic, (self.x, self.y))


# End of the Enemy class

# Start the game
pygame.init()
game_width = 1000
game_height = 650
screen = pygame.display.set_mode((game_width, game_height))
clock = pygame.time.Clock()
running = True

# Load the images
background_pic = pygame.image.load("./assets/Scene_A.png")
player_pic = pygame.image.load("./assets/fish01A.png")

# Player's variables
player_x = 50
player_y = 100
player_speed = 3
player_size = 50
player_facing_left = False
player_hitbox = pygame.Rect(player_x, player_y, player_size, player_size)
player_alive = True

# Variables for Heads up display
score = 0
score_font = pygame.font.SysFont("default",30)
score_text = score_font.render("Score: " + str(score),1,(0,0,0))

# Enemy Spawn Timer
enemy_timer_max = 40
enemy_timer = enemy_timer_max

# Make the enemies array
enemies = []

while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        if event.type == pygame.KEYDOWN and event.key == pygame.K_ESCAPE:
            running = False

    # Check if key pressed and Player movement
    keys = pygame.key.get_pressed()
    if keys[pygame.K_RIGHT]:
        player_facing_left = False
        player_x += player_speed
    if keys[pygame.K_LEFT]:
        player_facing_left = True
        player_x -= player_speed
    if keys[pygame.K_UP]:
        player_y -= player_speed
    if keys[pygame.K_DOWN]:
        player_y += player_speed
    if keys[pygame.K_SPACE]:
        player_size += 2

    # draw the background
    screen.blit(background_pic, (0, 0))

    # Spawn a new Enemy when enemy_timer hits 0
    enemy_timer -= 1
    if enemy_timer <= 0:
        new_enemy_y = random.randint(0, game_height)
        new_enemy_speed = random.randint(2, 5)
        new_enemy_size = random.randint(player_size / 2, player_size * 2)
        if random.randint(0, 1) == 0:
            enemies.append(Enemy(-new_enemy_size * 2, new_enemy_y, new_enemy_speed, new_enemy_size))
        else:
            enemies.append(Enemy(game_width, new_enemy_y, -new_enemy_speed, new_enemy_size))
        enemy_timer = enemy_timer_max

    # update enemies
    for enemy in enemies:
        enemy.update(screen)
    if player_alive:
    # collision detection
        for enemy in enemies:
            if player_hitbox.colliderect(enemy.hitbox):
                if player_size >= enemy.size:
                    score += enemy.size
                    player_size += 2
                    enemies.remove(enemy)
                else:
                    player_alive = False
            enemy.update(screen)

        # player hitbox properties
        player_hitbox.x = player_x + player_size / 8
        player_hitbox.y = player_y + player_size / 5
        player_hitbox.width = player_size - player_size / 4
        player_hitbox.height = player_size - player_size / 2
        #pygame.draw.rect(screen, (225, 0, 225), player_hitbox)

        # draw the player
        player_pic_small = pygame.transform.scale(player_pic, (player_size, player_size))
        if player_facing_left:
            player_pic_small = pygame.transform.flip(player_pic_small, True, False)

        screen.blit(player_pic_small, (player_x, player_y))

    score_text = score_font.render("Score: " + str(score),1,(0,0,0))
    screen.blit(score_text,(30,30))
    pygame.display.flip()
    clock.tick(50)
    pygame.display.set_caption("MY GAME fps: " + str(clock.get_fps()))

