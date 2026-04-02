// COPYRIGHT LMS INTERNATIONAL  2000
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATSam1DSpaceList
//
//=============================================================================
//
// Usage Notes: 
//
//=============================================================================
// Januari 2001   Creation                                                   KD
//=============================================================================
#ifndef CATSam1DSpaceList_H_
#define CATSam1DSpaceList_H_

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */

#include "CATSamExpression.h"

#include "CATSamI1DSpace.h"
#include "CATSamISpace.h"
#include "IUnknown.h"

/**
 * List Of 1D Spaces.
 */
class ExportedByCATSamExpression CATSam1DSpaceList
{
public:

   /**
	* Constructor
	*/
	CATSam1DSpaceList();

   /**
	* Destructor
	*/
	virtual ~CATSam1DSpaceList();

   /**
	* @return The Length
	*/
	virtual unsigned int						GetLength() const;

   /**
	* Returns a 1D Space
	* @param iIndex
	* @return A pointer to a CATSamI1DSpace.
	*/
	virtual const CATSamI1DSpace*				operator[]( unsigned int iIndex ) const;

   /**
	* Returns the string ID for a Space
	* @param iIndex
	* @return A pointer to the String.
	*/
	virtual const CATUnicodeString*				GetString( unsigned int iIndex ) const;

   /**
	* Returns the User string (NLS) for a Space
	* @param iIndex
	* @return A pointer to the String.
	*/
	virtual const CATUnicodeString*				GetUserString( unsigned int iIndex ) const;

   /**
	* Adds a 1D Space
	* @param iIndex
	* @param iSpace
	* @return S_OK if success, E_FAIL if not (e.g. Reference count > 1).
	*/
	virtual HRESULT								AddSpace( CATSamI1DSpace* iSpace, const CATUnicodeString& iString );

   /**
    * Reference counting
	* @return The current amount of references
    */
	virtual int									AddRef() const;

   /**
    * Reference counting
	* @return The current amount of references
    */
	virtual int									Release() const;

protected:

	int							_NumReference;

	unsigned int				_Length;
	CATSamI1DSpace**			_Spaces;
	CATUnicodeString**		_ArgumentStrings;
};

#endif
