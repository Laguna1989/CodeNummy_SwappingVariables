import pytest

from swap_temporary import swap_temporary


@pytest.mark.parametrize("a,b", [(1, 2), (2, 1), (0, 1), (42, 42), (-5000, 5000)])
def test_swap_temporary(a, b):
    tmp_a = a
    tmp_b = b

    a, b = swap_temporary(a, b)

    assert a == tmp_b
    assert b == tmp_a
