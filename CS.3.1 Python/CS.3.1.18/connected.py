from kivy.uix.screenmanager import Screen, SlideTransition

class Connected(Screen):
    # Logout Button
    def disconnect(self):
        self.manager.transition = SlideTransition(direction="right")
        self.manager.current = 'login'
        self.manager.get_screen('login').reset_form()

