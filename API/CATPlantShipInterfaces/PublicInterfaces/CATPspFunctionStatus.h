#ifndef CATPspFunctionStatus_h
#define CATPspFunctionStatus_h

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Function object status.
 * <b>Role</b>: Indicates if function has network data and if it is linked to 
 * a physical part.
 * @param PspFuncUndefined
 *    Function data is undefined.
 * @param PspFuncNet
 *    Function with network data and is not linked to any physical part.
 * @param PspFuncNetPhysType
 *    Function with network data and has only physical type information.
 * @param PspFuncNetPhysNoPos
 *    Function with network data and has physical information but no 3D position.
 * @param PspFuncNoNetPhys
 *    Function with no network data and is linked to a resolved physical part with 3D position.
 * @param PspFuncNetPhys
 *    Function with network data and is linked to a resolved physical part with 3D position.
 */

enum CATPspFunctionStatus {
                          PspFuncUndefined,
                          PspFuncNet, 
                          PspFuncNetPhysType, 
                          PspFuncNetPhysNoPos, 
                          PspFuncNoNetPhys,
                          PspFuncNetPhys 
};

#endif
