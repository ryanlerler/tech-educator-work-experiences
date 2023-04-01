from kivy.properties import StringProperty
from kivy.uix.screenmanager import Screen, SlideTransition

info_dict = {
    'porsche': ('Porsche 911', 'The Porsche 911 is a two-door, 2+2 high performance rear-engined sports car.'),
    'lotus': ('Lotus Evora', 'The car, which was developed under the project name Project Eagle, was launched as the '
                             'Evora on 22 July 2008 at the British International Motor Show.'),
    'chevrolet': ('Chevrolet Corvette', 'The Chevrolet Corvette, colloquially known as the Vette, is a two-door, '
                                        'two-passenger sports car manufactured and marketed by Chevrolet.'),
    'alfaromeo': ('Alfa Romeo 4C', 'The Alfa Romeo 4C (Type 960) is a mid-engined, lightweight, rear-wheel drive'
                                   ' sports car.')
}

class Info(Screen):
    source = StringProperty('')
    title = StringProperty('')
    body = StringProperty('')

    def __init__(self, **kwargs):
        super(Info, self).__init__(**kwargs)
        self.source = 'assets/' + self.name + '.jpg'
        self.title = info_dict[self.name][0]
        self.body = info_dict[self.name][1]

    def back(self):
        self.manager.transition = SlideTransition(direction="right")
        self.manager.current = 'gallery'



