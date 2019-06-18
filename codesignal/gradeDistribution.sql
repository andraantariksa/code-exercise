/*Please add ; after each select statement*/
CREATE PROCEDURE gradeDistribution()
BEGIN
	SELECT Name, ID
    FROM (
        SELECT Name, ID,
        (Midterm1 * 25 / 100) + (Midterm2 * 25 / 100) + (Final * 50/100) as opt1,
        (Midterm1 * 50 / 100) + (Midterm2 * 50 / 100) as opt2,
        Final as opt3
        FROM Grades
    ) as _ WHERE opt3 > opt2 and opt3 > opt1 ORDER by LEFT(name,3) asc, ID ASC;
END
