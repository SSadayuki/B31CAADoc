// COPYRIGHT DASSAULT SYSTEMES 2005

#ifndef SWKPostureSpec_h
#define SWKPostureSpec_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

// ****************************************************************************
// Framework DNBHumanModelingInterfaces
// Copyright Safework Inc.
// ****************************************************************************
//  Abstract:
//  ---------
//
//  Enum declaration for the manikin posture.
//
// ****************************************************************************
//  Usage:
//  ------
//    This enum is to be used with method SetPosture of interface SWKIBody.
// ****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 05/06/16
//  Goal  : Creation
// ****************************************************************************

enum SWKPostureSpec
{
    SWKPostureSpecDefault,
    SWKPostureSpecStand,
    SWKPostureSpecSit,
    SWKPostureSpecReach,
    SWKPostureSpecExtendedReach,
    SWKPostureSpecSpan,
    SWKPostureSpecKneel,
    SWKPostureSpecInitial
};
#endif
