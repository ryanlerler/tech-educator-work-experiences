try:
    inp = input('Press Ctrl+C or Interrupt the Kernel: ')
except KeyboardInterrupt:
    print('Caught KeyboardInterrupt')
except:
    print("Caught other errors")
else:
    print('No exception occured')
finally:
    print("Program ended")