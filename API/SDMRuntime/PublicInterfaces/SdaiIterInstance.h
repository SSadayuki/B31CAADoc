/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  2001
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiIterInstance -- Header
// ------------------------------------------------------------------------------------------------
// Auteurs :
//	PYR  (Novembre 1995)
// ------------------------------------------------------------------------------------------------
//  Historique :
//
//	MODIFICATION	: 01
//	DATE		: Nov 1995
//	AUTEUR		: PYR
//	NATURE		: Refonte complete de la version d'aout 93,suppression des 
//                        templates.  
//	DESCRIPTION	: hors norme.
//
// ------------------------------------------------------------------------------------------------

#ifndef _SDAI_ITER_INSTANCE_H_
#define _SDAI_ITER_INSTANCE_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0SIMPL.h>
#include <SdaiMacro.h>
#include <SdaiPrimitiveH.h>

class SdaiAggrInstance;
class SdaiBoolean;

// boullettes-proof test 
#ifdef Status
#undef Status
#error "Status has been defined(in X11 includes ?).It collides with Status function.Please undefine it "
#endif

// private structures:
/** @nodoc */
struct CATSdaiGenericIter;

//--------------------------------------------------------------------------------
// Ajout CVE pour methode Status dans classe SdaiIterator
// Etat 'BeforeFirst' ou 'AfterLast' d'un iterateur 
//--------------------------------------------------------------------------------
typedef enum 
{
	sdaiBEFORE_FIRST	= -1,
	sdaiON_ELEMENT		= 0,
	sdaiAFTER_LAST		= 1,
	sdaiNO_STATUS		= 2
} SdaiIterStatus;


//-----------------------------------------------------------------------------
/**
 * Class representing an iterator on SDAI instances.
 */
class ExportedByKS0SIMPL SdaiIterInstance 
{
  friend class SdaiAggrInstance;
  public:
    //------
    // 'tors
    //------
/** @nodoc */
	SdaiIterInstance();
/** @nodoc */
	SdaiIterInstance( const SdaiIterInstance& );
/** @nodoc */
	SdaiIterInstance( SdaiAggrInstance* anAggr);
/** @nodoc */
	SdaiIterInstance( const SdaiAggrInstance* anAggr, const SdaiAccessMode);// accessmode must be sdaiRO
#ifndef SDAI_MULTI_TRANS_BCC
  virtual // 'virtual' keyword removed by JNI 15/05/02: there are no subclasses of SdaiIterInstance, this gains us 4 bytes per instance.
#endif
  ~SdaiIterInstance() ;

    //------------------
    // SDAI operations
    //------------------
	/**
    * Creates the current position
    */
	SdaiInteger         Position() const;            // returns index in Aggr
/** @nodoc */
	int                 Position(const SdaiInteger); // sets index in Aggr
/** @nodoc */
	const SdaiBoolean & TestPosition() const;        // False if iterator is outside boundaries
/** @nodoc */
	SdaiIterStatus      Status() const;		 // more precise than TestPosition(extension)
	/**
    * Sets the iterator before the first item, outside boundaries.
    */
	void  		    Beginning();           
	/**
    * Sets the iterator after the last item, outside boundaries.
    */
	void		    End();
	/**
    * Sets the iterator to the next item.
	* @return sdaiTRUE if possible, SdaiFALSE else.
    */
	const SdaiBoolean & Next() ;  
	/**
    * Sets the iterator to the previous item.
	* @return sdaiTRUE if possible, SdaiFALSE else.
    */
	const SdaiBoolean & Previous(); 

    //------------------
    // operation declarations
    //------------------
	/**
    * Gets the value at the current position.
    */
	const SdaiPrimitiveH& 	GetCurrentValue() const;
/** @nodoc */
	void  		PutCurrentValue(const SdaiPrimitiveH&);
	/**
    * Removes the value at the current position.
    */
	SdaiPrimitiveH  RemoveCurrentValue();
/** @nodoc */
	const SdaiAggrInstanceH	Subject() const;
/** @nodoc */
	const SdaiBoolean &	        TestSubject() const;
/** @nodoc */
	int	                        Subject(SdaiAggrInstanceH iAgg);

    //------------------
    // (private) acces to data
    //------------------
/** @nodoc */
	inline  CATSdaiGenericIter * IterInstance() const
		{return _GenData;}
	
  protected:
	// validity check
/** @nodoc */
	int Valid() const;
/** @nodoc */
	int ValidRW() const;

  protected: 
    //------------------
    // data implemetation
    //------------------
/** @nodoc */
	CATSdaiGenericIter * _GenData;


};

#endif


