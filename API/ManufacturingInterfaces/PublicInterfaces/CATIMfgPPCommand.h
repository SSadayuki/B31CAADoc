/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
//=============================================================================
//
// CATIMfgPPCommand :
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// May. 99   Creation                                   C Duhayon
//=============================================================================
#ifndef CATIMfgPPCommand_H
#define CATIMfgPPCommand_H

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "MfgItfEnv.h"
#include "CATListOfCATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgPPCommand;
#else
extern "C" const IID IID_CATIMfgPPCommand;
#endif
class ExportedByMfgItfEnv CATIMfgPPCommand : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
   /**
   *   This method is used to set the name of NC_Command on current object
   *   @param iCommandName
   *	<tt> Name of NC_Command
   **/
  virtual boolean SetCommandName (const CATUnicodeString& iCommandName) = 0 ;

   /**
   *   This method is used to get the name of NC_Command on current object
   *   @param oCommandName
   *	<tt> Name of NC_Command
   **/
  virtual boolean GetCommandName (CATUnicodeString& oCommandName) = 0 ;

   /**
   *   This method is used to get milling time and global time necessary to execute PP Command
   *   @param oMillingTime
   *	<tt> Milling time (expressed in minutes)
   *   @param oGlobalTime
   *	<tt> Global time (expressed in minutes)
   **/
  virtual boolean GetCharacteristics(double& MillingTime, double& GlobalTime) = 0 ;

     /**
   *   This method is used to get the evaluation of a PP Command
   *   @param oValue
   *	<tt> Evaluation of the command
   **/
  virtual boolean GetCommandEvaluation (CATListValCATUnicodeString &oValue) = 0 ;

   /**
   *   This method is used to set the number of sequence of NC_Command on current object
   *   @param iSequenceNumber
   *	<tt> Number of the sequence to use for the NC_Command
   **/
  virtual boolean SetSequenceNumber (const int& iSequenceNumber) = 0 ;

   /**
   *   This method is used to get the number of sequence of NC_Command on current object
   *   @param oSequenceNumber
   *	<tt> Number of the sequence to use for the NC_Command
   **/
  virtual boolean GetSequenceNumber (int& oSequenceNumber) = 0 ;

};

CATDeclareHandler(CATIMfgPPCommand, CATBaseUnknown) ;

#endif







