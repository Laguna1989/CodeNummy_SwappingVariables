import pytest

from swap_muldiv import swap_muldiv


@pytest.mark.parametrize("a,b", [(1, 2), (2, 1), (-5000, 5000)])
def test_swap_mul_div(a, b):
    tmp_a = a
    tmp_b = b

    a, b = swap_muldiv(a, b)

    assert a == tmp_b
    assert b == tmp_a
