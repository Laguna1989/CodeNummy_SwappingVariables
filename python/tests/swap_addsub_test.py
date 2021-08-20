import pytest

from swap_addsub import swap_addsub


@pytest.mark.parametrize("a,b", [(1, 2), (2, 1), (0, 0), (-5000, 5000)])
def test_swap_add_sub(a, b):
    tmp_a = a
    tmp_b = b

    a, b = swap_addsub(a, b)

    assert a == tmp_b
    assert b == tmp_a
