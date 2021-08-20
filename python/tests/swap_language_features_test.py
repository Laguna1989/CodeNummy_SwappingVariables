import pytest

from swap_language import swap_language


@pytest.mark.parametrize("a,b", [(1, 2), (2, 1), (0, 0), (-5000, 5000)])
def test_swap_language(a, b):
    tmp_a = a
    tmp_b = b

    a, b = swap_language(a, b)

    assert a == tmp_b
    assert b == tmp_a
