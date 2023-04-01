from kivy.uix.screenmanager import Screen, SlideTransition


class Gallery(Screen):

    def disconnect(self):
        self.manager.transition = SlideTransition(direction="right")
        self.manager.current = 'login'
        self.manager.get_screen('login').reset_form()

    def get_info(self, model):
        self.manager.transition = SlideTransition(direction="left")
        self.manager.current = model

