from dog import Dog

def test_dog_bark():
    d = Dog("Fido", 8)
    print(help(Dog))
    assert d.bark() == "Fido barks!"

def test_dog_age_and_name():
    d = Dog("Fido", 8)
    assert d.get_age() == 8
    assert d.get_name() == "Fido"


if __name__ == "__main__":
    test_dog_bark()