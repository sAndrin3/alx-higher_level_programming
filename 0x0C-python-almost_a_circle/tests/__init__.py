import os

# Create the models package if it doesn't exist
if not os.path.exists("models"):
    os.makedirs("models")
    with open("models/__init__.py", "w"):
        pass

class Base:
    __nb_objects = 0

    def __init__(self, id=None):
        if id is not None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects
