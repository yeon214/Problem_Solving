select count(FISH_TYPE) FISH_COUNT, month(time)
from FISH_INFO
group by month(time)
order by month(time);