from kivymd.app import MDApp
from kivy.properties import StringProperty
from kivy.uix.screenmanager import ScreenManager, Screen, SlideTransition

from incorrect import Incorrect
from gallery import Gallery
from info import Info

class Login(Screen):
    def do_login(self, login_text, password_text):
        app = MDApp.get_running_app()

        app.username = login_text
        app.password = password_text

        self.manager.transition = SlideTransition(direction="left")

        if app.username == "Roboto" and app.password == "123":
            self.manager.current = 'gallery'
        else:
            self.manager.current = 'incorrect'

    def reset_form(self):
        self.ids['login'].text = ""
        self.ids['password'].text = ""

class LoginApp(MDApp):
    username = StringProperty(None)
    password = StringProperty(None)

    def build(self):
        manager = ScreenManager()

        manager.add_widget(Login(name='login'))
        manager.add_widget(Incorrect(name='incorrect'))
        manager.add_widget(Gallery(name='gallery'))

        manager.add_widget(Info(name='porsche'))
        manager.add_widget(Info(name='lotus'))
        manager.add_widget(Info(name='chevrolet'))
        manager.add_widget(Info(name='alfaromeo'))

        return manager

if __name__ == '__main__':
    LoginApp().run()


