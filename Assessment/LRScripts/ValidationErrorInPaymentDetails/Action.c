//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'http://localhost:1080/webtours/'", "snapshot=Action_1.inf");
	truclient_step("2", "form (1)", "snapshot=Action_2.inf");
	{
		truclient_step("2.1", "Click on Username textbox", "snapshot=Action_2.1.inf");
		truclient_step("2.2", "Type TC.getParam('username') in Username textbox", "snapshot=Action_2.2.inf");
		truclient_step("2.3", "Click on Password passwordbox", "snapshot=Action_2.3.inf");
		truclient_step("2.4", "Type ****************... in Password passwordbox", "snapshot=Action_2.4.inf");
		truclient_step("2.5", "Press Enter key on Password passwordbox", "snapshot=Action_2.5.inf");
	}
	truclient_step("3", "Click on Search Flights Button image", "snapshot=Action_3.inf");
	truclient_step("4", "Select Frankfurt from Arrival City listbox", "snapshot=Action_4.inf");
	truclient_step("5", "Click on findFlights button", "snapshot=Action_5.inf");
	truclient_step("6", "Click on reserveFlights button", "snapshot=Action_6.inf");
	truclient_step("7", "Click on buyFlights button", "snapshot=Action_7.inf");
	truclient_step("8", "Press OK in alert dialog", "snapshot=Action_8.inf");
	truclient_step("9", "Verify Payment Details 's 'Visible Text' Contain Payment Details", "snapshot=Action_9.inf");

	return 0;
}
