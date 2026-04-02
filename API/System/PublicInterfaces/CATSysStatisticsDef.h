# ifndef _CATSYSSTATDEF
# define _CATSYSSTATDEF

// COPYRIGHT DASSAULT SYSTEMES 2003
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// CATSysStatistics Time Unit
// --------------------------
/**
 * Time units for the statistics.
 * @param Millisecond
 *   durations are outputed in milliseconds
 * @param Second
 *   durations are outputed in seconds
 */
enum CATSysStatisticsTimeUnit { Millisecond, Second };


// CATSysStatistics Date Format
// ----------------------------
/**
 * Date formats for the statistics.
 * @param StandardDate
 *   date is outputed using the standart date format ( Mon Jan 1 08:00.00 2000 )
 * @param NumericalDate
 *   date is outputed using the numerical date format ( 2000.001.08.00.00 )
 * @param NumericalDateMillisecond
 *   date is outputed using the numerical date format ( 2000.001.08.00.00.000 )
 */
enum CATSysStatisticsDateFormat { StandardDate, NumericalDate, NumericalDateMillisecond};


// CATSysStatistics Output Format
// ------------------------------
/**
 * Output formats for the statistics.
 * @param StandardOutput
 *   default output 
 * @param NoThematics
 *   the thematic name is not repeated on each line
 * @param OutputXML
 *   statistics are outputed in a XML file (not available now)
 */
enum CATSysStatisticsOutputFormat { StandardOutput, NoThematics, OutputXML};

# endif /* _CATSYSSTATDEF */

