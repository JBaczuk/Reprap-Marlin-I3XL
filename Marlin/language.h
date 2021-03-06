#ifndef LANGUAGE_H
#define LANGUAGE_H

// Languages
// 1  Custom (For you to add your own messages)
// 2  English 
// 3  French	(Waiting translation)
// 4  German	(Waiting translation)
// 5  Etc

#define LANGUAGE_CHOICE 1  // Pick your language from the list above

#if LANGUAGE_CHOICE == 1

// LCD Menu Messages

	#define WELCOME_MSG "Printer Ready."
	#define MSG_SD_INSERTED "Card inserted"
	#define MSG_SD_REMOVED "Card removed"
	#define MSG_MAIN " Main \003"
	#define MSG_AUTOSTART " Autostart"
	#define MSG_DISABLE_STEPPERS " Disable Steppers"
	#define MSG_AUTO_HOME " Auto Home"
	#define MSG_SET_ORIGIN " Set Origin"
	#define MSG_COOLDOWN " Cooldown"
	#define MSG_EXTRUDE " Extrude"
	#define MSG_PREHEAT_PLA " Preheat PLA"
	#define MSG_PREHEAT_ABS " Preheat ABS"
	#define MSG_MOVE_AXIS " Move Axis      \x7E"
	#define MSG_SPEED " Speed:"
	#define MSG_NOZZLE " \002Nozzle:"
	#define MSG_BED " \002Bed:"
	#define MSG_FAN_SPEED " Fan speed:"
	#define MSG_FLOW " Flow:"
	#define MSG_CONTROL " Control \003"
	#define MSG_MIN " \002 Min:"
	#define MSG_MAX " \002 Max:"
	#define MSG_FACTOR " \002 Fact:"
	#define MSG_AUTOTEMP " Autotemp:"
	#define MSG_ON "On "
	#define MSG_OFF "Off"
	#define MSG_PID_P " PID-P: "
	#define MSG_PID_I " PID-I: "
	#define MSG_PID_D " PID-D: "
	#define MSG_PID_C " PID-C: "
	#define MSG_ACC  " Acc:"
	#define MSG_VXY_JERK " Vxy-jerk: "
	#define MSG_VMAX " Vmax "
	#define MSG_X "x:"
	#define MSG_Y "y:"
	#define MSG_Z "z:"
	#define MSG_E "e:"
	#define MSG_VMIN " Vmin:"
	#define MSG_VTRAV_MIN " VTrav min:"
	#define MSG_AMAX " Amax "
	#define MSG_A_RETRACT " A-retract:"
	#define MSG_XSTEPS " Xsteps/mm:"
	#define MSG_YSTEPS " Ysteps/mm:"
	#define MSG_ZSTEPS " Zsteps/mm:"
	#define MSG_ESTEPS " Esteps/mm:"
	#define MSG_MAIN_WIDE " Main        \003"
	#define MSG_TEMPERATURE_WIDE " Temperature \x7E"
	#define MSG_MOTION_WIDE " Motion      \x7E"
	#define MSG_STORE_EPROM " Store EPROM"
	#define MSG_LOAD_EPROM " Load EPROM"
	#define MSG_RESTORE_FAILSAFE " Restore Failsafe"
	#define MSG_REFRESH "\004Refresh"
	#define MSG_WATCH " Watch   \003"
	#define MSG_PREPARE " Prepare \x7E"
	#define MSG_PREPARE_ALT " Prepare \003"
	#define MSG_CONTROL_ARROW " Control \x7E"
	#define MSG_TUNE " Tune    \x7E"
	#define MSG_STOP_PRINT " Stop Print   \x7E"
	#define MSG_CARD_MENU " Card Menu    \x7E"
	#define MSG_NO_CARD " No Card"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Something is wrong in the MenuStructure."
	#define MSG_DWELL "DWELL..."		
	#define MSG_NO_MOVE "No move."
	#define MSG_PART_RELEASE "Partial Release"
	#define MSG_KILLED "KILLED. "
	#define MSG_PREHEAT_PLA " Preheat PLA"
	#define MSG_PREHEAT_ABS " Preheat ABS"
	#define MSG_STEPPER_RELEASED "Released."


// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " External Reset"
	#define MSG_BROWNOUT_RESET " Brown out Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_MARLIN "Marlin: "
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Last Updated: "
	#define MSG_FREE_MEMORY " Free Memory: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Done saving file."
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line:"
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line:"
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line:"
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line:"
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temp"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done."
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Marlin V1; Sprinter/grbl mashup for gen6 FIRMWARE_URL:http://www.mendel-parts.com PROTOCOL_VERSION:1.0 MACHINE_TYPE:Mendel EXTRUDER_COUNT:1\n"
	#define MSG_COUNT_X " Count X:"
	#define MSG_ERR_KILLED "Printer halted. kill() called !!"
	#define MSG_RESEND "Resend:"
	#define MSG_UNKNOWN_COMMAND "Unknown command:\""
	#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
	#define MSG_INVALID_EXTRUDER "Invalid extruder"
	#define MSG_X_MIN "x_min:"
	#define MSG_X_MAX "x_max:"
	#define MSG_Y_MIN "y_min:"
	#define MSG_Y_MAX "y_max:"
	#define MSG_Z_MIN "z_min:"
	#define MSG_Z_MAX "z_max:"

	#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
	#define MSG_SD_INIT_FAIL "SD init fail"
	#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
	#define MSG_SD_OPENROOT_FAIL "openRoot failed"
	#define MSG_SD_CARD_OK "SD card ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open failed"
	#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
	#define MSG_SD_FILE_OPENED "File opened:"
	#define MSG_SD_SIZE " Size:"
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir:"

	#define MSG_STEPPER_TO_HIGH "Steprate to high : "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"

#endif
#if LANGUAGE_CHOICE == 4

// LCD Menu Messages

	#define WELCOME_MSG "UltiMARLIN Ready."

	#define MSG_SD_INSERTED "Card inserted"
	#define MSG_SD_REMOVED "Card removed"
	#define MSG_MAIN " Main \003"
	#define MSG_AUTOSTART " Autostart"
	#define MSG_DISABLE_STEPPERS " Stepper abschalten"
	#define MSG_AUTO_HOME " Auto Heim"
	#define MSG_SET_ORIGIN " Position setzen"
	#define MSG_PREHEAT_PLA " Aufheizen PLA"
	#define MSG_PREHEAT_ABS " Aufheizen ABS"
	#define MSG_COOLDOWN " Abkuehlen"
	#define MSG_EXTRUDE " Extrude"
	#define MSG_PREHEAT_PLA " Preheat PLA"
	#define MSG_PREHEAT_ABS " Preheat ABS"
	#define MSG_MOVE_AXIS " Move Axis      \x7E"
        #define MSG_MOVE_AXIS " Achsen verfahren   \x7E"
	#define MSG_SPEED " Geschw:"
	#define MSG_NOZZLE " \002Duese:"
	#define MSG_BED " \002Bett:"
	#define MSG_FAN_SPEED " Luefter geschw.:"
	#define MSG_FLOW " Fluss:"
	#define MSG_CONTROL " Kontrolle \003"
	#define MSG_MIN " \002 Min:"
	#define MSG_MAX " \002 Max:"
	#define MSG_FACTOR " \002 Faktor:"
	#define MSG_AUTOTEMP " AutoTemp:"
	#define MSG_ON "Ein "
	#define MSG_OFF "Aus "
	#define MSG_PID_P " PID-P: "
	#define MSG_PID_I " PID-I: "
	#define MSG_PID_D " PID-D: "
	#define MSG_PID_C " PID-C: "
	#define MSG_ACC  " Acc:"
	#define MSG_VXY_JERK " Vxy-jerk: "
	#define MSG_VMAX " Vmax "
	#define MSG_X "x:"
	#define MSG_Y "y:"
	#define MSG_Z "z:"
	#define MSG_E "e:"
	#define MSG_VMIN " Vmin:"
	#define MSG_VTRAV_MIN " VTrav min:"
	#define MSG_AMAX " Amax "
	#define MSG_A_RETRACT " A-retract:"
	#define MSG_XSTEPS " Xsteps/mm:"
	#define MSG_YSTEPS " Ysteps/mm:"
	#define MSG_ZSTEPS " Zsteps/mm:"
	#define MSG_ESTEPS " Esteps/mm:"
	#define MSG_MAIN_WIDE " Main        \003"
	#define MSG_TEMPERATURE_WIDE " Temperatur \x7E"
	#define MSG_MOTION_WIDE " Motion      \x7E"
	#define MSG_STORE_EPROM " EPROM speichern"
	#define MSG_LOAD_EPROM "  EPROM laden"
	#define MSG_RESTORE_FAILSAFE " Standard Konfig."
	#define MSG_REFRESH "\004Refresh"
	#define MSG_WATCH " Beobachten   \003"
	#define MSG_PREPARE " Prepare \x7E"
	#define MSG_PREPARE_ALT " Prepare \003"
	#define MSG_CONTROL_ARROW " Control \x7E"
	#define MSG_TUNE " Tune    \x7E"
	#define MSG_STOP_PRINT " Druck stoppen   \x7E"
	#define MSG_CARD_MENU " SDKarten Menue    \x7E"
	#define MSG_NO_CARD " Keine SDKarte"
	#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Fehler in der  Menuestruktur."
	#define MSG_DWELL "DWELL..."		
	#define MSG_NO_MOVE "No move."
	#define MSG_PART_RELEASE "Partial Release"
	#define MSG_KILLED "KILLED. "
	#define MSG_PREHEAT_PLA " Preheat PLA"
	#define MSG_PREHEAT_ABS " Preheat ABS"
	#define MSG_STEPPER_RELEASED "Released."


// Serial Console Messages

	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " External Reset"
	#define MSG_BROWNOUT_RESET " Brown out Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_MARLIN "Marlin: "
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Last Updated: "
	#define MSG_FREE_MEMORY " Free Memory: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Done saving file."
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line:"
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line:"
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line:"
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line:"
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temp"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done."
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Marlin V1; Sprinter/grbl mashup for gen6 FIRMWARE_URL:http://www.mendel-parts.com PROTOCOL_VERSION:1.0 MACHINE_TYPE:Mendel EXTRUDER_COUNT:1\n"
	#define MSG_COUNT_X " Count X:"
	#define MSG_ERR_KILLED "Printer halted. kill() called !!"
	#define MSG_RESEND "Resend:"
	#define MSG_UNKNOWN_COMMAND "Unknown command:\""
	#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
	#define MSG_INVALID_EXTRUDER "Invalid extruder"
	#define MSG_X_MIN "x_min:"
	#define MSG_X_MAX "x_max:"
	#define MSG_Y_MIN "y_min:"
	#define MSG_Y_MAX "y_max:"
	#define MSG_Z_MIN "z_min:"
	#define MSG_Z_MAX "z_max:"

	#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
	#define MSG_SD_INIT_FAIL "SD init fail"
	#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
	#define MSG_SD_OPENROOT_FAIL "openRoot failed"
	#define MSG_SD_CARD_OK "SD card ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open failed"
	#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
	#define MSG_SD_FILE_OPENED "File opened:"
	#define MSG_SD_SIZE " Size:"
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir:"

	#define MSG_STEPPER_TO_HIGH "Steprate to high : "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"

#endif
#endif // ifndef LANGUAGE_H
