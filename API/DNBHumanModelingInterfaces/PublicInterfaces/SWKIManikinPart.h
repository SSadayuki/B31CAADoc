// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef _SWKIManikinPart_h
#define _SWKIManikinPart_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

// *****************************************************************************
// Framework DNBHumanModelingInterfaces
// Copyright Safework Inc.
// *****************************************************************************
//  Abstract:
//  ---------
//       SWKIManikinPart interface.
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//  CATBaseUnknown
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//   GetMemo
//   SetMemo
//   Write
//   Read
//   ExtractPart
//   ConvertToPart
//   PasteFrom
//   GetPartID
//   GetTimeStamp
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/02/28
//  Goal  : Creation
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
//
// --- DNBHumanModelingInterfaces
#include "SWPartID.h"
//
// --- System
#include "CATListOfInt.h"
//
// --- C & C++
#include <time.h>
//
// --- DNBHumanModeling
class SWManikinPart;
//
// --- ObjectModelerBase
class CATStreamDefinition;
//
// --- System
class CATUnicodeString;

#ifdef _WINDOWS_SOURCE
#ifdef __SWKHumanModelingItf
#define ExportedBySWKHumanModelingItf __declspec(dllexport)
#else
#define ExportedBySWKHumanModelingItf __declspec(dllimport)
#endif
#else
#define ExportedBySWKHumanModelingItf
#endif

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySWKHumanModelingItf IID IID_SWKIManikinPart;
#else
extern "C" const IID IID_SWKIManikinPart;
#endif

/**
  * This interface provides functionality for any part of the manikin that is
  * persistent.<br>
  *
  * A manikin part is a certain amount of data that can be saved and<br>
  * retrieved from secondary storage, and that can be applied, cut, copied<br>
  * and pasted onto one or more manikins. The manikin's vision, its<br>
  * anthropometry and its posture are good examples of manikin parts.<br>
  * Note that the manikin itself is a manikin part, and acts like a bag<br>
  * that wraps up all the sub-parts that can be contained within it.
  **/

class ExportedBySWKHumanModelingItf SWKIManikinPart : public CATBaseUnknown
{
	CATDeclareInterface;

  public:

	/**
	  * Assign a memo to the part.
	  * @param piMemo The text of the memo to assign to the part.
	  * @return <code>S_OK</code> on success, and another error code on failure.
	  **/
	virtual HRESULT SetMemo(const CATUnicodeString & piMemo) = 0;

	/**
	  * @return The memo previously assigned to the part.
	  **/
	virtual CATUnicodeString GetMemo() const = 0;

	/**
	  * Write a part of the manikin onto a stream.
	  * @param pioStream The stream to write into.
	  * @return <code>S_OK</code> on success, and another error code on failure.
	  **/
	virtual HRESULT Write(CATStreamDefinition & pioStreamDef) = 0;

	/**
	  * Read a part of the manikin from a stream.
	  * @param pioStream The stream to read from.
	  * @return <code>S_OK</code> on success, and another error code on failure.
	  **/
	virtual HRESULT Read(CATStreamDefinition & pioStreamDef) = 0;

	/**
	  * Extract a child part, based on its part ID and
	  * an optional index.
	  *
	  * @param piPartID The ID of the desired part.
	  *
	  * @param piIndex The index of the desired part.
	  *
	  * @return A pointer to the desired sub-part, which<br>
	  * can subsequently be pasted onto another part<br>
	  * (cf. method <code>PasteFrom()</code>) or onto a stream.<br>
	  * <br>
	  * When the part is no longer needed by the caller,<br>
	  * it must be deallocated via method <code>Destroy()</code>.<br>
	  * <br>
	  * <strong>N.B.: The caller must not use operator
	  * <code><font color="blue"><b>delete</b></font></code>
	  * to deallocate the part, otherwise<br>
	  * the behavior of the method will be unpredictable.</strong><br>
	  * <br>
	  * <strong>Example:</strong><br>
	  * Let's say we want to extract the posture of one manikin,
	  * to paste it on another manikin.<br>
	  * The following code achieves this result:<br>
	  * <pre>
	  *  SWKIManikin * myManikin = ...;
	  *  SWKIManikin * myOtherManikin = ...;
	  *
	  *  SWKIManikinPart * posture = myManikin->ExtractPart(SWPartPosture);
	  *  myOtherManikin->PasteFrom(posture->ConvertToPart());
	  *  posture->Release();
	  * <pre>
	  **/
	virtual SWKIManikinPart * ExtractPart(SWPartID piPartID, 
										unsigned piPartIndex = 0,
										CATListOfInt * piList = NULL) = 0;

	/**
	  * Convert the current part into an object of type SWManikinPart.<br>
	  * This is needed when a pointer to SWKIManikinPart needs to be<br>
	  * converted into a pointer to SWManikinPart in order to perform a paste.<br>
	  * <br>
	  * <strong>Example:</strong><br>
	  * Let's say we need to paste an anthropometry onto a manikin.<br>
	  * The following code achieves this result:<br>
	  * <pre>
	  *  SWKIManikin * myManikin = ...;
	  *  SWKIAnthro * myAnthro = ...;
	  *
	  *  myManikin->PasteFrom(myAnthro->ConvertToPart());
	  * <pre>
	  *
	  * Note that you <strong>must not</strong> call method <code>Destroy()</code><br>
	  * on the pointer returned by this method.
	  **/
	virtual const SWManikinPart * ConvertToPart() = 0;


	/**
	  * Paste another part on this one.
	  *
	  * @param piAnotherPart The part to paste (the source).
	  *
	  * @param piApplyReferential Specifies whether to respect the
	  * current referential of the manikin.  If this parameter is set
	  * to TRUE, then the global position of the manikin might change
	  * upon application of this part, in order to respect the referential
	  * coordinates.  Otherwise, the method will not seek to move the manikin's
	  * global position.
	  *
	  * For more information about the referential definition, please consult
	  * interface <code>SWKIManikin</code>.
	  *
	  * @return <code>S_OK</code> if success, or an error code indicating failure.
	  **/
	virtual HRESULT PasteFrom(const SWManikinPart * piAnotherPart,
								boolean piApplyReferential = TRUE) = 0;

	/**
	  * @return The identification of the current part.
	  **/
	virtual SWPartID GetPartID() const = 0;

	/**
	  * @return The time when the part was last written on disk.
	  **/
	virtual time_t GetTimeStamp() const = 0;
};

CATDeclareHandler(SWKIManikinPart, CATBaseUnknown);

#endif
