import pygame       # import this important module to start the game
import random       # import this module to create random enemies

# Set up the Enemy class
class Enemy():
    # Enemy Construction Function
    def __init__(self, x, y, speed, size): ## add the attributes
        self.x = x      ## initialize x attribute
        self.y = y      ## initialize y attribute
        self.speed = speed      ## initialize speed attribute
        self.size = size        ## initialize size attribute
        self.pic = pygame.image.load("./assets/eagles.jpg")
        self.hitbox = pygame.Rect(self.x + self.size/10, self.y + self.size/10, self.size - self.size/5, self.size - self.size/5)

        # Shrink the enemy pic
        self.pic = pygame.transform.scale(self.pic, (self.size,self.size))

    def update(self, screen):
        self.x += self.speed
        self.hitbox.x += self.speed
        # pygame.draw.rect(screen, (0, 255, 255), self.hitbox)
        screen.blit(self.pic, (self.x, self.y))

# Start the game
pygame.init()       ## initialize the game here
game_width = 1000
game_height = 650
screen = pygame.display.set_mode((game_width, game_height))
clock = pygame.time.Clock()
running = True

# Load the images
background_pic = pygame.image.load("./assets/Scene_A.jpg")      # load Scene A.png from assets folder
player_pic = pygame.image.load("./assets/toucan.jpg")           # load toucan.png from assets folder

# Player's variables
player_x = 50
player_y = 100
player_speed = 3
player_size = 50
player_hitbox = pygame.Rect(player_x, player_y, player_size, player_size)
player_facing_left = False      ## set to face right
player_alive = True     # set player alive
# Shrink the player pic
player_pic = pygame.transform.scale(player_pic, (player_size, player_size))

# Enemy Spawn Timer
enemy_timer_max = 40
enemy_timer = enemy_timer_max

# Make the Enemies array
enemies = []

# Main game loop below
while running:
    # Makes the game stop if the player clicks the X or presses esc
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False     ## stop the game
        if event.type == pygame.KEYDOWN and event.key == pygame.K_ESCAPE:
            running = False     ## stop the game

    # Check if key pressed and Player movement
    keys = pygame.key.get_pressed()
    if keys[pygame.K_RIGHT]:
        player_facing_left = False      # set player facing right
        player_x += player_speed        # increase player_x with player_speed
    if keys[pygame.K_LEFT]:
        player_facing_left = True       # set player facing left
        player_x -= player_speed        # decrease player_x with player_speed
    if keys[pygame.K_UP]:
        player_y -= player_speed        # decrease player_y with player_speed
    if keys[pygame.K_DOWN]:
        player_y += player_speed        # increase player_y with player_speed

    # draw the background
    screen.blit(background_pic, (0, 0))

    # draw the player
    screen.blit(player_pic, (player_x, player_y))

    # Spawn a new Enemy when enemy_timer hits 0
    enemy_timer -= 1
    if enemy_timer <= 0:
        new_enemy_y = random.randint(0, game_height)        ## use randint set enemy y from 0 to game_height
        new_enemy_speed = random.randint(2, 5)      ## use randint set enemy y from 2 to 5
        new_enemy_size = random.randint(player_size / 2, player_size * 2)
        if random.randint(0, 1) == 0:
            enemies.append(Enemy(-new_enemy_size * 2, new_enemy_y, new_enemy_speed, new_enemy_size))
        enemy_timer = enemy_timer_max

    #update enemies
    for enemy in enemies:
        enemy.update(screen)
        if enemy.x < - 1000 or enemy.x > game_width + 1000:
            enemies.remove(enemy)

    if player_alive:
    # collision detection
        for enemy in enemies:
            if player_hitbox.colliderect(enemy.hitbox):
                if player_size >= enemy.size:
                    player_size += 2        ## increase player size
                    enemies.remove(enemy)
                else:
                    player_alive = False        ## player will be dead
            enemy.update(screen)

    pygame.display.flip()
    clock.tick(50)
    pygame.display.set_caption("MY GAME fps: " + str(clock.get_fps()))

