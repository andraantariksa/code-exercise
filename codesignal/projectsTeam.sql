/*Please add ; after each select statement*/
CREATE PROCEDURE projectsTeam()
BEGIN
	SELECT DISTINCt name FROM projectLog ORDER BY name ASC;
END