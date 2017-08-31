# Modeless-Dialog
How to create Modeless Dialog



MFC provides two types of Dialog when we create any Dialog based application.
1. Modal Dailog(See another repository)
2. Modeless Dialog

Here I am discussing about how to create modeless dialog in GUI application.
Modeless dialog creation.

Steps:-
1. Add dialog to your application.
2. Provide class to the newly added dialog using class wizard(base class must be CDialogEx).
3. Now in the calling function create object pointer to the newly added dialog class.
4. call create and show dialog function to display the modeless dialog.
e.g
  	CModeLessDlg *obj;  				//creating object pointer for CModeless class which is class for modeless dialog. 
	obj = new CModeLessDlg(this); 		//initializing object pointer
	obj->Create(CModeLessDlgJMV::IDD);	//creating the Modeless dialog
	obj->ShowWindow(SW_SHOW);		//Showing the dialog
 
5. After this you need to destroy it using destroy function.


Ex :- ModelessEx Application is build using VS 10.
