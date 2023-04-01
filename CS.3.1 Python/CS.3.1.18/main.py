from kivy.app import App
from kivy.properties import StringProperty
from kivy.uix.screenmanager import ScreenManager, Screen, SlideTransition

from incorrect import Incorrect
from connected import Connected

class Login(Screen):
    def do_login(self, login_text, password_text):
        app = App.get_running_app()

        app.username = login_text
        app.password = password_text

        self.manager.transition = SlideTransition(direction="left")

        if app.username == "Roboto" and app.password == "123":
            self.manager.current = 'connected'
        else:
            self.manager.current = 'incorrect'


    def reset_form(self):
        self.ids['login'].text = ""
        self.ids['password'].text = ""

class LoginApp(App):
    username = StringProperty(None)
    password = StringProperty(None)

    def build(self):
        manager = ScreenManager()

        manager.add_widget(Login(name='login'))
        manager.add_widget(Incorrect(name='incorrect'))
        manager.add_widget(Connected(name='connected'))

        return manager

if __name__ == '__main__':
    LoginApp().run()
