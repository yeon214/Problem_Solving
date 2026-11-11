SELECT BOOK_ID,AUTHOR_NAME,PUBLISHED_DATE
from book, author
where book.AUTHOR_ID = author.AUTHOR_ID and CATEGORY = '경제'
order by PUBLISHED_DATE;