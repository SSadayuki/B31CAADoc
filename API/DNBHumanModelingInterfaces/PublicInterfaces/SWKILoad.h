// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef _SWKILoad_h
#define _SWKILoad_h

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
//
//    SWKILoad interface.
//    This interface offers non-IDL Load services.
//
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    SetMemo
//    GetID
//    GetName
//    SetName
//    IsActive
//    Activate
//    GetManikin
//    GetMagnitude
//    SetMagnitude
//    GetElevation
//    SetElevation
//    GetDeviation
//    SetDeviation
//    GetSymetric
//    SetSymetric
//    GetSegment
//    RedrawNode
//    PasteFromLoad
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Francois LEBEAU
//  Date  : 03/10/19
//  Goal  : Creation
// *****************************************************************************
//
// --- DNBHumanModelingInterfaces
#include "SWKEnums.h"
//
// --- System
#include "CATBaseUnknown.h"
#include "CATString.h"
#include "CATUnicodeString.h"
//
// --- DNBHumanModelingInterfaces
class SWKIManikin;
class SWKISegment;

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
extern ExportedBySWKHumanModelingItf IID IID_SWKILoad;
#else
extern "C" const IID IID_SWKILoad;
#endif

class ExportedBySWKHumanModelingItf SWKILoad : public CATBaseUnknown
{
	CATDeclareInterface;

 public:

	/**
	  *
	  **/
	virtual void Init() = 0;

	/**
	  * @return The ID of the load.
	  **/
	virtual CATString GetID() const = 0;

	/**
	  * @return The name of the load.
	  **/
	virtual CATUnicodeString GetName() const = 0;

	/**
	  * Give a user-defined name to the load.
	  **/
	virtual void SetName(const CATUnicodeString & piName) = 0;

	/**
	  * @return The state of the load : active or inactive ?
	  **/
	virtual boolean IsActive() const = 0;

	/**
	  * Activate/Deactivate the load.
	  **/
	virtual HRESULT Activate(const boolean piActivate) = 0;

	/**
	  * @return The manikin which owns this load.
	  **/
	virtual SWKIManikin * GetManikin() const = 0;

	/**
	  * Get the magnitude in kg for piSide (left or right)
	  **/
	virtual double GetMagnitude(const SWKESide & piSide) const = 0;

	/**
	  * Set the magnitude in kg for piSide (left or right)
	  **/
	virtual HRESULT SetMagnitude(double piMagnitude, const SWKESide & piSide) = 0;

	/**
	  * Get the elevation value for piSide (left or right).
	  **/
	virtual double  GetElevation(const SWKESide & piSide) const = 0;

	/**
	  * Set the elevation value for piSide (left or right).
	  **/
	virtual HRESULT SetElevation(double piElevation, const SWKESide & piSide) = 0;

	/**
	  *  Get the deviation value for piSide (left or right)
	  **/
	virtual double  GetDeviation(const SWKESide & piSide) const = 0;

	/**
	  * Set the deviation value for piSide (left or right).
	  **/
	virtual HRESULT SetDeviation(double piDeviation, const SWKESide & piSide) = 0;

	/**
	  * Get the symetric state.
	  **/
	virtual boolean GetSymetric() const = 0;

	/**
	  * Set the symetric state. 
	  **/
	virtual HRESULT SetSymetric(boolean piSymetric) = 0;

	/**
	  * Get the segment related to the load (left or right).
	  **/
	virtual SWKISegment * GetSegment(const SWKESide & piSide) = 0;

	/**
	  * Redraw the visualization of the load and the node in the tree.
	  **/
	virtual void RedrawNode() = 0;

	/**
	  * Paste the load piOtherLoad on the current load.
	  **/
	virtual HRESULT PasteFromLoad(const SWKILoad * piOtherLoad) = 0;
};

CATDeclareHandler(SWKILoad, CATBaseUnknown);
#endif
