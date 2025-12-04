//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'http://localhost:1080/webtours/'", "snapshot=Action_1.inf");
	truclient_step("2", "Click on Username textbox", "snapshot=Action_2.inf");
	truclient_step("3", "Type TC.getParam('username') in Username textbox", "snapshot=Action_3.inf");
	truclient_step("4", "Click on Password passwordbox", "snapshot=Action_4.inf");
	truclient_step("5", "Type ****************... in Password passwordbox", "snapshot=Action_5.inf");
	truclient_step("6", "Click on Login button", "snapshot=Action_6.inf");
	truclient_step("7", "Click on Search Flights Button image", "snapshot=Action_7.inf");
	truclient_step("8", "Select Frankfurt from Arrival City listbox", "snapshot=Action_8.inf");
	truclient_step("9", "Click on findFlights button", "snapshot=Action_9.inf");
	lr_rendezvous("Find Flight");
	truclient_step("11", "Click on reserveFlights button", "snapshot=Action_11.inf");
	truclient_step("12", "Click on Credit Card textbox", "snapshot=Action_12.inf");
	truclient_step("13", "Type 123 in Credit Card textbox", "snapshot=Action_13.inf");
	truclient_step("14", "Click on Exp Date textbox", "snapshot=Action_14.inf");
	truclient_step("15", "Type 11/11 in Exp Date textbox", "snapshot=Action_15.inf");
	truclient_step("16", "Click on buyFlights button", "snapshot=Action_16.inf");
	truclient_step("17", "Verify Thank you for booking... 's 'Visible Text' Contain Thank you for booking through Web Tours.", "snapshot=Action_17.inf");

	return 0;
}
