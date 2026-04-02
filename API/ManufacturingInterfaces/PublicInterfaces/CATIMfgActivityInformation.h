// COPYRIGHT DASSAULT SYSTEMES  2003
//=============================================================================//  

#ifndef CATIMfgActivityInformation_H
#define CATIMfgActivityInformation_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"

#include "MfgItfEnv.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgActivityInformation;
#else
extern "C" const IID IID_CATIMfgActivityInformation;
#endif

/**
* Interface to implement to override the standard table view output of a manufacturing activity.
*/

class ExportedByMfgItfEnv CATIMfgActivityInformation : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

   /**
   *   Defines the Key Words List that you implement.
   *   @param oListKeyWords
   *	  The Keywords List that you implement
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>"MfgActType" : to define the output in column Class</li>
   *      <li>"MfgMachFeed" : to define the output in column Machining feedrate</li>
   *      <li>"MfgSpndlFeed" : to define the output in column Spindle feed</li>
   *      <li>"MfgSpndlNum" : to define the output in column Spindle Number</li>
   *      <li>"MfgResName" : to define the output in column Resources names</li>
   *      <li>"MfgActComment" : to define the output in column Comment</li>
   *      <li>"MfgActActive" : to define the output in column Active/Inactive</li>
   *      <li>"MfgActStatus" : to define the output in column status (Missing Info, Not up to date, Up to date)</li>
   *      <li>"MfgActComputed" : to define the output in column Computed/Not computed</li>
   *      <li>"MfgTPPacked" : to define the output in column external Tool Path (Yes/No)</li>
   *      <li>"MfgActVideoRes" : to define the output in column Video result attached (Yes/No)</li>
   *      <li>"MfgSCTime" : to define the output in column Specified Cycle Time result attached (Yes/No)</li>
   *      <li>"MfgTotalTime" : to define the output in column Total Time result attached (Yes/No)</li>
   *      <li>"MfgMachTime" : to define the output in column Machining Time result attached (Yes/No)</li>
   *      <li>"MfgMachTol" : to define the output in column Tolerance result attached (Yes/No)</li>
   *      <li>"MfgRetFeed" : to define the output in column Retract Feedrate result attached (Yes/No)</li>
   *      <li>"MfgAppFeed" : to define the output in column Approach Feedrate result attached (Yes/No)</li>
   *      <li>"MfgThicknesses" : to define the output in column Thicknesses result attached (Yes/No)</li>
   *      <li>"MfgOffsets" : to define the output in column Offsets result attached (Yes/No)</li>
   *      </ul>
   *   @return
   *      The return code
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>S_OK :allways return S_OK</li>
   *      </ul>
   */
     virtual HRESULT GetImplementedKeyWords (CATListOfCATUnicodeString &oListKeyWords)=0;

   /**
   *   Computes the string to display in the Table view for a Key Word.
   *   @param iKeyWords
   *	  This parameter corresponds to the Key Word for which you want to get an information 
   *   @param oInfoValue 
   *      This parameter defines the string you want to display for the Key word
   *   @param oMode 
   *      This parameter defines the mode you choose. You can add an information to the default one or you can replace it.
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>0   : you want to replace the default information by oInfoValue</li>
   *      <li>1   : you want to add oInfoValue to the default information</li>
   *      <li>other case : the default information will be displayed</li>
   *      </ul>
   *   @return
   *      The return code
   *      <br><b>Legal values</b>:
   *      <ul>
   *      <li>S_OK   : oInfoValue is successfully computed</li>
   *      <li>other case : the String "-" will be displayed</li>
   *      </ul>
   */
     virtual HRESULT GetInfo (CATUnicodeString &iKeyWords, CATUnicodeString &oInfoValue, int &oMode)=0;
};

CATDeclareHandler( CATIMfgActivityInformation, CATBaseUnknown) ;

#endif

