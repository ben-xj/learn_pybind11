from math_util import add


def test_add():
    assert add(1, 1) == 2
    assert add(1, -2) == -1
    assert add(1.0, 2.) == 3.0