// --------------------------------------------------------------
// VPM (c) Copyright Dassault Systemes 2011                           
// --------------------------------------------------------------
// Responsable : JDV                                                 
// --------------------------------------------------------------
// Header      : ENOVPageRange.h                                      
// --------------------------------------------------------------
// Content     : Page definition for Light Query
// --------------------------------------------------------------
// History     :                                                          
// Creation    : 2011/05/25 > JDV                                          
// --------------------------------------------------------------

/** @CAA2Level L0
  * @CAA2Usage U0
 */

#ifndef ENOVPageRange_H
#define ENOVPageRange_H

#define PageRangeMinAndMax 2
#define PageRangeMin      -1
#define PageRangeMax       1
#define PageRangeElse      0

#include "GUIDVPMInterfaces.h"

#include "ENOVPageBound.h"


class ExportedByGUIDVPMInterfaces ENOVPageRange
{
   public :

      ENOVPageRange( ENOVPageBound * lowBound, ENOVPageBound * upBound );
      ~ENOVPageRange();

	  ENOVPageBound * GetLowerRange() const;
	  ENOVPageBound * GetUpperRange() const;

      void SetMin();
      void SetMax();
      int GetMaxOrMin() const;


   private :
  
      ENOVPageRange( const ENOVPageRange & );
      ENOVPageRange & operator = ( const ENOVPageRange & );
      int iMaxOrMin;
	  ENOVPageBound * lowerBound;
	  ENOVPageBound * upperBound;
};

#endif




