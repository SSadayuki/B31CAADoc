//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================
#ifndef CATIMfgLatheMultiTurSpiMachineMgt_H
#define CATIMfgLatheMultiTurSpiMachineMgt_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

// module
#include "MfgItfEnv.h"

// inheritance
#include "CATBaseUnknown.h"

// forwards
#include "CATListOfInt.h"
#include "CATListOfCATUnicodeString.h"
#include "CATLISTV_CATBaseUnknown.h"

#include "CATMathPoint.h"
#include "CATMathDirection.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgLatheMultiTurSpiMachineMgt ;
#else
extern "C" const IID IID_CATIMfgLatheMultiTurSpiMachineMgt ;
#endif

/**   
* Interface dedicated to Turret and Spindle management on Lathe machine objects.
* <b>Role</b>: This interface offers services to manage mainly the turret and spindle parameters.<br>
* Common attributes are declared in CATMfgMachineConstant.<br>
* 
* @see CATIMfgMachine
* @see CATMfgMachineConstant
*/
class ExportedByMfgItfEnv CATIMfgLatheMultiTurSpiMachineMgt : public CATBaseUnknown
{
	CATDeclareInterface ;  

public:
	/**
	* Set the default turret (the first one) of a Lmt machine
	* @return HRESULT.
	*/
	virtual HRESULT SetDefaultLatheTurret ()=0;

	/**
	* Create a lathe turret 
	* @param oLatheTurret : the created MfgLmtTurret as a  CATBaseUnknown_var
	* @return HRESULT.
	*/
	virtual HRESULT CreateLatheTurret (CATBaseUnknown_var &oLatheTurret)=0;

	/**
	* Add a lathe turret iLatheTurret in the Lmt machine's turret aggregat
	* @param iLatheTurret : the MfgLmtTurret to be added
	* @return HRESULT.
	*/
	virtual HRESULT AddLatheTurret(const CATBaseUnknown_var &iLatheTurret)=0;

	/**
	* Remove all lathe turrets from the Lmt machine's turret aggregat
	* @return HRESULT.
	*/
	virtual HRESULT RemoveLatheTurrets ()=0;

	/**
	* Remove the turret iLatheTurret from the Lmt machine's turret aggregat
	* @param iLatheTurret : the MfgLmtTurret to be added
	* @return HRESULT.
	*/
	virtual HRESULT RemoveLatheTurret (CATBaseUnknown_var  &iLatheTurret)=0;

	/**
	* Create and add a lathe turret in the Lmt machine's turret aggregat
	* @param oLatheTurret : the created MfgLmtTurret
	* @return HRESULT.
	*/
	virtual HRESULT CreateAndAddLatheTurret(CATBaseUnknown_var &oLatheTurret)=0;

	/**
	* Get the turret oLatheTurret stored at index number in the Lmt machine's turret aggregat
	* @param number : index of the turret (first element index=1)
	* @param oLatheTurret : the MfgLmtTurret stored at the index number
	* @return HRESULT.
	*/
	virtual HRESULT GetTurret (int number, CATBaseUnknown_var &oLatheTurret)=0;

	/**
	* Get the number of turret stored in the Lmt machine's turret aggregat
	* @param oNumber : number of turret stored
	* @return HRESULT.
	*/
	virtual HRESULT GetNumberOfTurret(int& oNumber)=0;

	/**
	* Get the list of turrets stored in the Lmt machine's turret aggregat
	* @param oListOfTurrets : list of turrets stored
	* @return HRESULT.
	*/
	virtual HRESULT GetListOfTurrets( CATListValCATBaseUnknown_var & oListOfTurrets )=0;

	/**
	* Set the default Spindle (the first one) of a Lmt machine
	* @return HRESULT.
	*/
	virtual HRESULT SetDefaultLatheSpindle ()=0;

	/**
	* Create a lathe Spindle 
	* @param oLatheSpindle : the created MfgLmtSpindle as a  CATBaseUnknown_var
	* @return HRESULT.
	*/
	virtual HRESULT CreateLatheSpindle (CATBaseUnknown_var &oLatheSpindle)=0;

	/**
	* Add a lathe Spindle iLatheSpindle in the Lmt machine's Spindle aggregat
	* @param iLatheSpindle : the MfgLmtSpindle to be added
	* @return HRESULT.
	*/
	virtual HRESULT AddLatheSpindle(const CATBaseUnknown_var &iLatheSpindle)=0;

	/**
	* Remove all lathe Spindles from the Lmt machine's Spindle aggregat
	* @return HRESULT.
	*/
	virtual HRESULT RemoveLatheSpindles ()=0;

	/**
	* Remove the Spindle iLatheSpindle from the Lmt machine's Spindle aggregat
	* @param iLatheSpindle : the MfgLmtSpindle to be added
	* @return HRESULT.
	*/
	virtual HRESULT RemoveLatheSpindle (CATBaseUnknown_var  &iLatheSpindle)=0;

	/**
	* Create and add a lathe Spindle in the Lmt machine's Spindle aggregat
	* @param oLatheSpindle : the created MfgLmtSpindle
	* @return HRESULT.
	*/
	virtual HRESULT CreateAndAddLatheSpindle(CATBaseUnknown_var &oLatheSpindle)=0;

	/**
	* Get the Spindle oLatheSpindle stored at index number in the Lmt machine's Spindle aggregat
	* @param number : index of the Spindle (first element index=1)
	* @param oLatheSpindle : the MfgLmtSpindle stored at the index number
	* @return HRESULT.
	*/
	virtual HRESULT GetSpindle (int number, CATBaseUnknown_var &oLatheSpindle)=0;

	/**
	* Get the Main Spindle Reference Axis
	* @param oMainSpindleRefPoint :    main spindle reference point
	* @param oMainSpindleSpindleAxis : main spindle revolution axis
	* @param oMainSpindleRadialAxis :  main spindle radial axis
	* @return HRESULT.
	*/
	virtual HRESULT GetMainSpindleAxisReference(CATMathPoint &oMainSpindleRefPoint, CATMathDirection &oMainSpindleSpindleAxis, CATMathDirection &oMainSpindleRadialAxis )=0;

	/**
	* Get the Any Spindle Reference Axis
	* @param iBULatheSpindle :   spindle (could be NULL_var then Main spindle is taken)
	* @param oMainSpindleRefPoint :    main spindle reference point
	* @param oMainSpindleSpindleAxis : main spindle revolution axis
	* @param oMainSpindleRadialAxis :  main spindle radial axis
	* @return HRESULT.
	*/
	virtual HRESULT GetAnySpindleAxisReference(CATBaseUnknown_var &iBULatheSpindle,CATMathPoint &oSpindleRefPoint, CATMathDirection &oSpindelAxialAxis, CATMathDirection &oSpindleRadialAxis )=0;

	/**
	* Get the number of Spindle stored in the Lmt machine's Spindle aggregat
	* @param number : umber of Spindle stored
	* @return HRESULT.
	*/
	virtual HRESULT GetNumberOfSpindle(int& oNumber)=0;

	/**
	* Get the list of spindles stored in the Lmt machine's spindle aggregat
	* @param oListOfSpindles : list of spindles stored
	* @return HRESULT.
	*/
	virtual HRESULT GetListOfSpindles( CATListValCATBaseUnknown_var & oListOfSpindles )=0;

	/**
	* Check if the geometrical links of an axis sytem are not too strong to disable Sug.. services
	* @param iBUTurret : Turret owning the Machining Axis Sytem
	* @param iBUMachiningAxisSytemSug : convenient axis syteme for a turret
	* @param iDisplayWarning : Display a warning window if too srong links
	* @param oIsOk : = 1 if links are ok, = 0 if not possible
	* @return HRESULT.
	*/
	virtual HRESULT CheckMachiningAxisSystemTurretGeometrialLinks(const CATBaseUnknown_var &iBUTurret,const CATBaseUnknown_var &iBUMachiningAxisSytem,const int iDisplayWarning,int &oIsOk)=0;

	/**
	* Suggest a convenient axis syteme for a turret
	* @param iTurretPoint : a point (origin of Turret Axis System)
	* @param iBULatheSpindle : a reference spindle (main spindle)
	* @param oBUMachiningAxisSytemSug : convenient axis syteme for a turret
	* @return HRESULT.
	*/
	virtual HRESULT GetSugMachiningAxisSystemTurret(CATMathPoint &iTurretPoint,CATBaseUnknown_var &iBUTurret,CATBaseUnknown_var &iBULatheSpindle, CATBaseUnknown_var & ioBUMachiningAxisSytemSug)=0;

	/**
	* Suggest a convenient axis syteme for a turret from an angle
	* @param Angle representes : a rotation relative to main spindle axis system
	* @param iBULatheSpindle : a reference spindle (main spindle)
	* @param ioBUMachiningAxisSytemSug : convenient axis syteme for a turret
	* @return HRESULT.
	*/
	virtual HRESULT GetSugMachiningAxisSystemTurretFromAngle(double  &iRadAngle,CATBaseUnknown_var &iBUTurret,CATBaseUnknown_var &iBULatheSpindle, CATBaseUnknown_var &ioBUMachiningAxisSytemSug)=0;

	/**
	* Set Machining Axis System TurretIn Plane
	* @param iBULatheSpindle : a reference spindle (main spindle)
	* @param ioBUMachiningAxisSytemSug : convenient axis syteme for a turret
	* Returns HRESULT.
	*/
	virtual HRESULT SetMachiningAxisSystemTurretInPlane(CATBaseUnknown_var &iBUTurret,CATBaseUnknown_var &iBULatheSpindle, CATBaseUnknown_var &ioBUMachiningAxisSytemSug)=0;

	/**
	* Shift an Axis 
	* @param iRadial : representes a shift in Radial Direction 
	* @param iAxial : representes a shift in Axial Direction 
	* @param iBULatheSpindle : a reference spindle (main spindle)
	* @param ioBUMachiningAxisSytemSug : convenient axis syteme for a turret
	* @return HRESULT.
	*/
	virtual HRESULT ShiftMachiningAxisSystemTurretAxialRadial(double  &iAxial,double iRadial, CATBaseUnknown_var &iBUTurret,CATBaseUnknown_var &iBULatheSpindle,CATBaseUnknown_var & ioBUMachiningAxisSytemSug)=0;

};

CATDeclareHandler(CATIMfgLatheMultiTurSpiMachineMgt, CATBaseUnknown) ;

#endif

