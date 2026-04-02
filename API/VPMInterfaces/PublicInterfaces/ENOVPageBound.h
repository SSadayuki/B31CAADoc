// --------------------------------------------------------------
// VPM (c) Copyright Dassault Systemes 2011
// --------------------------------------------------------------
// Responsable : JDV
// --------------------------------------------------------------
// Header      : ENOVPageBound.h
// --------------------------------------------------------------
// Content     : Page value definition for Light Query
// --------------------------------------------------------------
// History     :
// Creation    : 2011/05/27 > JDV
// --------------------------------------------------------------

/** @CAA2Level L0
  * @CAA2Usage U0
 */

#ifndef ENOVPageBound_H
#define ENOVPageBound_H


#include "GUIDVPMInterfaces.h"
#include "CATUnicodeString.h"
#include "CORBAAnyDef.h"


class ExportedByGUIDVPMInterfaces ENOVPageBound
{
   public :

      ENOVPageBound();
      ENOVPageBound( const ENOVPageBound & );
      ~ENOVPageBound();

      void GetValue( int & );
	  void SetValue( int );
      void GetValue( double & );
	  void SetValue( double & );
      void GetValue( long & );
	  void SetValue( long & );
      void GetValue( CATUnicodeString & );
	  void SetValue( CATUnicodeString & );

      void GetAnyValue( CATUnicodeString & )const;


      CATBoolean isInt();
      CATBoolean isFloat();
      CATBoolean isDate();
      CATBoolean isString();

	  CATBoolean equals( ENOVPageBound * iPB1 );

      static int CompareBySortValue( ENOVPageBound * iPB1, ENOVPageBound * iPB2 );


   private :

      ENOVPageBound & operator = ( const ENOVPageBound & );

	  CORBAAny value;
};

#endif




