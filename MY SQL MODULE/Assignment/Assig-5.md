Library System

Use the Schema from previous assignment to perform the given set of

queries.

1\) List all the books that are written by Author Loni and has price



less then 600.



Answer:-



select \* from books where auther="loni" \&\& price=<600;



2\) List the Issue details for the books that are not returned yet.



Answer:-



select \* from issue 

where return\_date is null;





3\) Update all the blank return\_date with 31-Dec-06 excluding 7005



and 7006.



Answer:-



update issue set return\_date="31-Dec-06"

where return\_date is null 

and book\_no not in 7005;



4\) List all the Issue details that have books issued for more then 30



days.



select \* from issue

where 



Answer:-



5\) List all the books that have price in range of 500 to 750 and has



category as Database.



Answer:-



select \* from books

where price between 500 and 750

and categary = "database"; 



6\) List all the books that belong to any one of the following

categories Science, Database, Fiction, Management.



Answer:-



select \* from books

where categories in ("Science", "Database", "Fiction","Management");



7\) List all the members in the descending order of Penalty due on



them.



Answer:-



select \* from members

order by penalty desc;



8\) Modify the price of book with id 103 to Rs 300 and category to



RDBMS.



Answer:-



update books set price=300 and category="RDBMS"

where book\_id=103; 



9\) List all the books in ascending order of category and descending



order of price.



Answer:-



select \* from books

order by category, price desc;



10\) List all the books that contain word SQL in the name of the book.



Answer:-



select \* from book

where book\_name like "%SQL%";



11\) List the Lib\_Issue\_Id, Issue\_Date, Return\_Date and No of days



Book was issued.



Answer:-



select lib\_issue\_id, issue\_date, return\_date,

(return\_date - issue\_date) as no\_of\_days

from issue;





12\) Find the details of the member of the Library in the order of their



joining the library.



Answer:-



select \* from member

order by join\_date;



13\) Display the count of total no of books issued to Member 101.



Answer:-



select count(\*) as "total\_books\_issued" from issued

where member\_id=101; 



14\) Display the total penalty due for all the members.



Answer:-



select sum(penalty) as "total\_penalty"

from member





15\) Display the total no of members



Answer:-



select \* from members;



16\) Display the total no of books issued



Answer:-



select count(\*) as "total\_books\_issued" 

from issue;



17\) Display the average membership fees paid by all the members



Answer:-



select avg(membership fee) as "avg membership fee"

from member;



18\) List the various categories and count of books in each category.



Answer:-



select categorie, count(\*) as "count of books"

from book

group by categorie;



19\) List the book\_No and the number of times the book is issued in the

descending order of count.



Answer:-



select book\_no, count(\*) as issue\_count from issue

group by book\_no

order by issue\_count desc;





20\) Find the maximum, minimum, total and average penalty amount in

the member table.



Answer:-



select max(penalty) as maximum\_penalty ,min(penalty) as minimum\_penalty,

sum(penalty) as total\_penalty,avg(penalty) as average\_penalty

from member;



21\) Display the member id and the no of books for each member that

has issued more then 2 books.



Answer:-



select member\_id, count(\*) as "no of books "

from issue

group by member\_id

having count(\*)>2;



22\) Display the member id, book no and no of times the same book is

issued by the member in the descending order of count.



Answer:-



select member\_id, book\_no, count(\*) as "no of times"

from issue

group by member\_id, book\_no

order by no of times desc;



23\) Display the month and no of books issued each month in the

descending order of count.



Answer:-



select issue\_month, count(\*) as "no\_book\_issued"

from issue

order by issue\_month desc;





24\) List the book\_no of all the books that are not issued to any



member so far.



Answer:-



select book\_no, count(\*) as (all\_the\_boks)

from issue

where book\_issue is null;



25\) List all the member id that exist in member table and has also at

least one book issued by them.



Answer:-



select m\_id 

from member

where m\_id in(select m\_id from issue\_details); 





26\) List the member ID with highest and lowest no of books issued.



Answer:-



select m\_id, count(book\_no) as total\_issued 

from issue\_details 

group by m\_id 

order by total\_issued desc 

limit 1;



select m\_id, count(book\_no) as total\_issued 

from issue\_details 

group by m\_id 

order by total\_issued asc 

limit 1;







27\) List all the Issue\_details for books issued in December and July

without using any arithmetic, Logical or comparison operator.



Answer:-



select \* from issue\_details

where to\_char(issue\_date, 'month') in ('December','july');



28\) List the Book\_No, Book\_Name and Issue\_date for all the books

that are issued in month of December and belong to category Database.



Answer:-



select book\_no, book\_name, issue\_date

from book b

join issue i on b.book\_no = i.book\_no

where lower(b.category) = 'database'

and extract(month from i.issue\_date) = 12;





29\) List the Member Id, Member Name and max books allowed in the

descending order of the max books allowed.



Answer:-



select member\_id, member\_name, max\_books\_allowed

from member

order by max\_books\_allowed desc;





30\) List the Book No, Book Name, Issue\_date and Return\_Date for all

the books issued by Richa Sharma.



Answer:-



select b.book\_no, b.book\_name, i.issue\_date, i.return\_date

from book b

join issue i on b.book\_no = i.book\_no

join member m on m.member\_id = i.member\_id

where lower(m.member\_name) = 'richa sharma';





31\) List the details of all the members that have issued books in

Database category.



Answer:-

select distinct m.\*

from member m

join issue i on m.member\_id = i.member\_id

join book b on b.book\_no = i.book\_no

where lower(b.category) = 'database';





32\) List all the books that have highest price in their own category.



Answer:-



select \*

from book b1

where price = (

&nbsp;   select max(price)

&nbsp;   from book b2

&nbsp;   where b2.category = b1.category

);





33\) List all the Issue\_Details where Issue\_date is not within the

Acc\_open\_date and Return\_date for that member.



Answer:-



select \*

from issue i

join member m on m.member\_id = i.member\_id

where not (i.issue\_date between m.acc\_open\_date and i.return\_date);





34\) List all the members that have not issued a single book so far.



Answer:-



select \*

from member

where member\_id not in (select member\_id from issue);





35\) List all the members that have issued the same book as issued by

Garima.



Answer:-

select distinct m.member\_id, m.member\_name

from member m

join issue i on m.member\_id = i.member\_id

where i.book\_no in (

&nbsp;   select book\_no

&nbsp;   from issue i2

&nbsp;   join member m2 on m2.member\_id = i2.member\_id

&nbsp;   where lower(m2.member\_name) = 'garima'

);





36\) List the Book\_Name, Price of all the books that are not returned

for more then 30 days.



Answer:-



select b.book\_name, b.price

from book b

join issue i on b.book\_no = i.book\_no

where return\_date is null

and current\_date - issue\_date > 30;





37\) List all the authors and book\_name that has more then 1 book

written by them.



Answer:-



select author, book\_name

from book

where author in (

&nbsp;   select author

&nbsp;   from book

&nbsp;   group by author

&nbsp;   having count(\*) > 1

);





38\) List the Member ID, Member Name of the people that have issued

the highest and the lowest no of books.



Answer:-

-- highest

select member\_id, member\_name

from member

where member\_id = (

&nbsp;   select member\_id

&nbsp;   from issue

&nbsp;   group by member\_id

&nbsp;   order by count(\*) desc

&nbsp;   limit 1

);



-- lowest

select member\_id, member\_name

from member

where member\_id = (

&nbsp;   select member\_id

&nbsp;   from issue

&nbsp;   group by member\_id

&nbsp;   order by count(\*) asc

&nbsp;   limit 1

);





39\) List the details of highest 3 priced books.



Answer:-



select \*

from book

order by price desc

limit 3;





40\) List the total cost of all the books that are currently issued but not

returned.



Answer:-



select sum(price)

from book b

join issue i on b.book\_no = i.book\_no

where i.return\_date is null;





41\) List the details of the book that has been issued maximum no of

times.



Answer:-



select b.\*

from book b

join issue i on b.book\_no = i.book\_no

group by b.book\_no

order by count(\*) desc

limit 1;





42\) List how many books are issued to lifetime members.



Answer:-



select count(\*)

from issue i

join member m on m.member\_id = i.member\_id

where lower(m.member\_type) = 'lifetime';





43\) List all member types and how many members are there in each

type.



Answer:-



select member\_type, count(\*)

from member

group by member\_type;





44\) List first 5 members who had joined library.



Answer:-



select \*

from member

order by acc\_open\_date

limit 5;





45\) List the members with their member type, who have issued books

during the period 1st December to 31st December.



Answer:-



select m.member\_id, m.member\_name, m.member\_type

from member m

join issue i on m.member\_id = i.member\_id

where i.issue\_date between '2025-12-01' and '2025-12-31';





46\) List all the members who have not returned books yet.



Answer:-



select distinct m.\*

from member m

join issue i on m.member\_id = i.member\_id

where i.return\_date is null;





47\) List all the members who joined library on the same date Garima



joined.



Answer:-



select \*

from member

where acc\_open\_date = (

&nbsp;   select acc\_open\_date

&nbsp;   from member

&nbsp;   where lower(member\_name) = 'garima'

);





48\) List all the members who has issued books from author “Loni” in



the month of December



Answer:-



select distinct m.member\_name

from member m

join issue i on m.member\_id = i.member\_id

join book b on b.book\_no = i.book\_no

where lower(b.author) = 'loni'

and extract(month from i.issue\_date) = 12;





49\) List names of the authors whose books are least issued by



lifetime members.





Answer:-



select author

from book

where author in (

&nbsp;   select b.author

&nbsp;   from book b

&nbsp;   join issue i on i.book\_no = b.book\_no

&nbsp;   join member m on m.member\_id = i.member\_id

&nbsp;   where lower(m.member\_type) = 'lifetime'

&nbsp;   group by b.author

&nbsp;   having count(\*) = (

&nbsp;       select min(cnt) 

&nbsp;       from (

&nbsp;           select count(\*) as cnt

&nbsp;           from book b2

&nbsp;           join issue i2 on i2.book\_no = b2.book\_no

&nbsp;           join member m2 on m2.member\_id = i2.member\_id

&nbsp;           where lower(m2.member\_type) = 'lifetime'

&nbsp;           group by b2.author

&nbsp;       ) x

&nbsp;   )

);





50\) List the names of members who has issued the books whose cost

is more than 300 rupees and whose author is “Scott Urman”



Answer:-



select distinct m.member\_name

from member m

join issue i on m.member\_id = i.member\_id

join book b on b.book\_no = i.book\_no

where b.price > 300

and lower(b.author) = 'scott urman';





51\) List all lifetime members who joined library during 1st January

2006 to 31st December 2006 but issued only one book.



Answer:-



select m.\*

from member m

where lower(m.member\_type) = 'lifetime'

and m.acc\_open\_date between '2006-01-01' and '2006-12-31'

and m.member\_id in (

&nbsp;   select member\_id

&nbsp;   from issue

&nbsp;   group by member\_id

&nbsp;   having count(\*) = 1

);





52\) Modify the Penalty\_Amount for Garima Sen to Rs 100.



Answer:-



update member

set penalty\_amount = 100

where lower(member\_name) = 'garima sen';





