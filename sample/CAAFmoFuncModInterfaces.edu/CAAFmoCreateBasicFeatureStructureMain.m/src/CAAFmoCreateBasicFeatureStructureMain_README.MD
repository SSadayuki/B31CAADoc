# Building a Basic Feature Structure

## Mission:

This use case is intended to help you to build, create and save a basic feature structure. 

**BEWARE:** this code sample demonstrates L0 API only provided for beta testing purposes.

## Abstract
This article discusses the CAAFmoCreateBasicFeatureStructureMain use case. This use case explains how to build a basic feature structure.
- What You Will Learn With This Use Case 
- The CAAFmoCreateBasicFeatureStrucutreMain Use Case  
	- What Does CAAFmoCreateBasicFeatureStructureMain Do 
	- How to Launch CAAFmoCreateBasicFeatureStrucutreMain
	- Where to Find the CAAFmoCreateBasicFeatureStructureMain Code
- Step-by-Step 
- In Short 
- References

## The CAAFmoCreateBasicFeatureStructureMain Use Case-
CAAFmoCreateBasicFeatureStructureMain is a use case of the CAAFmoFuncModInterfaces.edu framework that illustrates CATFmoFuncModInterfaces framework capabilities.

## What Does CAAFmoCreateBasicFeatureStructureMain Do
The goal of CAAFmoCreateBasicFeatureStructureMain use case is to show how to create a basic feature structure. We illustrate this by creating a main functional set and then creating four functional set with appropriate names. The created feature structure is saved in a document. More precisely CAAFmoCreateBasicFeatureStructureMain:
- Creates an empty CATPart document.
- Creates the main functional set. 
- Creates four functional sets with appropriate names.
- Saves the feature in a CATPart document whose path is the first argument passed when launching CAAFmoCreateBasicFeatureStructureMain.

## How to launch CAAFmoCreateBasicFeatureStructureMain
To launch CAAFmoCreateBasicFeatureStructureMain, you will need to set up the build time environment, then compile CAAFmoCreateBasicFeatureStructureMain along with its prerequisites, set up the run time environment, and then execute the use case.
Launch the use case as follows:
- With Windows
e:> CAAFmoCreateBasicFeatureStructureMain  outputDirectory\PartCM1.CATPart 
- With UNIX
$ CAAFmoCreateBasicFeatureStructureMain  outputDirectory/PartCM1.CATPart 
where:
outputDirectory		 The directory into which PartCM1.CATPart  will be   stored
PartCM1.CATPart		The file that contains the features created

## Where to Find the CAAFmoCreateBasicFeatureStructureMain Code
The CAAFmoCreateBasicFeatureStructureMain use case is made of a single class named CAAFmoCreateBasicFeatureStructureMain located in the CAAFmoCreateBasicFeatureStructureMain.m module of the CAAFmoFuncModInterfaces.edu framework:
- Windows	InstallRootDirectory\CAAFmoFuncModINterfaces.edu\
CAAFmoCreateBasicFeatureStrucutreMain.m \
- Unix	InstallRootDirectory/CAAFmoFuncModINterfaces.edu/
CAAFmoCreateBasicFeatureStrucutreMain.m /
where InstallRootDirectory is the directory where the CAA CD-ROM is installed.

## Step-by-Step
There are five main steps in CAAFmoCreateBasicFeatureStructureMain:
1.	Prolog 
2.	Retrieving the Mechanical Part
3.	Creating a Main Functional Set	 
4.	Creating Four Functional Sets with Convenient change of name
5.	Saving the basic feature Structure 

We will now comment each of those sections by looking the code.

### Prolog 
CAAFmoCreateBasicFeatureStructureMain begins by checking that the command lines contains two arguments. It then creates a session, and creates a new CATPart document, referred to using a pointer to the CATDocument class named pDoc, and a smart pointer to the CATInit interface named hInitOnDoc. This is the usual sequence for creating a CATIA document.

### Retrieving the Mechanical part
```cpp

  CATISpecObject_var hMechPart;
  if (piPrtCont)
  {
    // retrieves the MechanicalPart
    hMechPart = piPrtCont -> GetPart();

    piPrtCont -> Release();
    piPrtCont = NULL;
  }

```
Using the smart pointer to CATInit, the document's root container is retrieved thanks to the GetRootContainer method as a CATIPrtContainer interface pointer. The root container is used to retrieve the mechanical part. 	

### Creating a Main Functional Set
```cpp
  CATIFmoBody * piFmoBody = NULL;
  CATIFmoFunctionalSet * piFmoFunctionalSet = NULL;
  if (SUCCEEDED (hMechPart -> QueryInterface (IID_CATIFmoBody, (void**) &piFmoBody)))
  {
    CATBoolean iForceCreation = TRUE,
               oIsCreated     = FALSE;

    // Forces the creation of the Main Functional Set
    piFmoBody -> CreateOrRetrieveMainFunctionalSet (&piFmoFunctionalSet, iForceCreation, oIsCreated);
    if (!oIsCreated)
    {
      return 4;
    }

    piFmoBody -> Release();
    piFmoBody = NULL;
  }
```

Once the mechanical part is retrieved, we query for CATIFmoBody Interface, which is used to create or retrieve the main functional set. 

	
### Creating Four Functional Sets with Convenient change of names
```cpp      
CATIFmoFunctionalSet * piShellableFunctionalSet = NULL,
                       * piInternalFunctionalSet  = NULL,
                       * piExternalFunctionalSet  = NULL,
                       * piProtectedFunctionalSet = NULL;
 
  piFmoFunctionalSet -> CreateFunctionalSet (&piShellableFunctionalSet);
  if (piShellableFunctionalSet)
  {
    CATIAlias * piFunSetAlias = NULL;
    if (SUCCEEDED (piShellableFunctionalSet -> QueryInterface (IID_CATIAlias, (void**) &piFunSetAlias)))
    {
       piFunSetAlias -> SetAlias ("FunctionalSet_Shellable");

       piFunSetAlias -> Release();
       piFunSetAlias = NULL;
    }

     piShellableFunctionalSet -> Release();
     piShellableFunctionalSet = NULL;
  }
  else
  {
    return 5;
  }

  piFmoFunctionalSet -> CreateFunctionalSet (&piInternalFunctionalSet);
   if (piInternalFunctionalSet)
  {
    CATIAlias * piFunSetAlias = NULL;
    if (SUCCEEDED (piInternalFunctionalSet -> QueryInterface (IID_CATIAlias, (void**) &piFunSetAlias)))
    {
       piFunSetAlias -> SetAlias ("FunctionalSet_Internal");

       piFunSetAlias -> Release();
       piFunSetAlias = NULL;
    }

     piInternalFunctionalSet -> Release();
     piInternalFunctionalSet = NULL;
  }
  else
  {
    return 5;
  }

  piFmoFunctionalSet -> CreateFunctionalSet (&piExternalFunctionalSet);
  if (piExternalFunctionalSet)
  {
    CATIAlias * piFunSetAlias = NULL;
    if (SUCCEEDED (piExternalFunctionalSet -> QueryInterface (IID_CATIAlias, (void**) &piFunSetAlias)))
    {
       piFunSetAlias -> SetAlias ("FunctionalSet_External");

       piFunSetAlias -> Release();
       piFunSetAlias = NULL;
    }

     piExternalFunctionalSet -> Release();
     piExternalFunctionalSet = NULL;
  }
  else
  {
    return 5;
  }

  piFmoFunctionalSet -> CreateFunctionalSet (&piProtectedFunctionalSet);
  if (piProtectedFunctionalSet)
  {
    CATIAlias * piFunSetAlias = NULL;
    if (SUCCEEDED (piProtectedFunctionalSet -> QueryInterface (IID_CATIAlias, (void**) &piFunSetAlias)))
    {
       piFunSetAlias -> SetAlias ("FunctionalSet_Protected");

       piFunSetAlias -> Release();
       piFunSetAlias = NULL;
    }

     piProtectedFunctionalSet -> Release();
     piProtectedFunctionalSet = NULL;
  }
  else
  {
    return 5;
  }

  if (piFmoFunctionalSet)
  {	
     piFmoFunctionalSet -> Release();
     piFmoFunctionalSet = NULL;
  } 
```
After creating the main functional set, we further create four functional sets using the CreateFunctionalSet method  and on each of them we query for the CATIAlias Interface, which is used to set the names to these functional sets using the method SetAlias. 

### Saving the Basic Feature Structure
```cpp

// Saves in the input path
  HRESULT boolSave = E_FAIL;
  char * nomPart1 = iArgv[1];
  boolSave = CATDocumentServices::SaveAs (*pDoc, nomPart1);
  if (!SUCCEEDED (boolSave))
  {
    return 5;
  }

The feature is saved in the CATPart document in the directory set as the first argument when launching CAAFmoCreateBasicFeatureStructureMain. This is the usual sequence for saving a document.
Deleting and Exiting Session
  // Closes the documents
  boolSave = CATDocumentServices::Remove (*pDoc);
  if (!SUCCEEDED (boolSave))
  {
    return 6;
  }

  // Closes the session   
  boolSave = ::Delete_Session ("SampleSession"); 
  if (!SUCCEEDED (boolSave))
  {
    rc = 6;
  }
  else
  {
    rc = 0;
  }
  return rc;
```

Deleting the session after the test is completed.

## In Short
This use case has demonstrated the way to Create Basic Feature Structure.

## History
Version: 1 [Jan 2018]	Document created

