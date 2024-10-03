import nanobind_example as m

def test_add():
    assert m.add(1, 2) == 3

def test_dog():
    dog = m.Dog()
    assert repr(dog).startswith('<nanobind_example.Dog object at ')
