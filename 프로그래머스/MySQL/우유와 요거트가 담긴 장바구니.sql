SELECT CART_ID
from CART_PRODUCTS
where NAME = 'Yogurt' or NAME = 'Milk'
group by CART_ID
having count(DISTINCT NAME) = 2
order by CART_ID;