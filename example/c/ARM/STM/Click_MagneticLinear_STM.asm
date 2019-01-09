_systemInit:
;Click_MagneticLinear_STM.c,30 :: 		void systemInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_MagneticLinear_STM.c,32 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #2
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_MagneticLinear_STM.c,33 :: 		mikrobus_spiInit( _MIKROBUS1, &_MAGNETICLINEAR_SPI_CFG[0] );
MOVW	R0, #lo_addr(__MAGNETICLINEAR_SPI_CFG+0)
MOVT	R0, #hi_addr(__MAGNETICLINEAR_SPI_CFG+0)
MOV	R1, R0
MOVS	R0, #0
BL	_mikrobus_spiInit+0
;Click_MagneticLinear_STM.c,34 :: 		mikrobus_logInit( _LOG_USBUART_A, 9600 );
MOVW	R1, #9600
MOVS	R0, #32
BL	_mikrobus_logInit+0
;Click_MagneticLinear_STM.c,35 :: 		mikrobus_logWrite("--- System Init ---", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr1_Click_MagneticLinear_STM+0)
MOVT	R0, #hi_addr(?lstr1_Click_MagneticLinear_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_MagneticLinear_STM.c,36 :: 		Delay_ms( 100 );
MOVW	R7, #20351
MOVT	R7, #18
NOP
NOP
L_systemInit0:
SUBS	R7, R7, #1
BNE	L_systemInit0
NOP
NOP
NOP
;Click_MagneticLinear_STM.c,37 :: 		}
L_end_systemInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _systemInit
_applicationInit:
;Click_MagneticLinear_STM.c,39 :: 		void applicationInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_MagneticLinear_STM.c,41 :: 		magneticlinear_spiDriverInit( (T_MAGNETICLINEAR_P)&_MIKROBUS1_GPIO, (T_MAGNETICLINEAR_P)&_MIKROBUS1_SPI );
MOVW	R1, #lo_addr(__MIKROBUS1_SPI+0)
MOVT	R1, #hi_addr(__MIKROBUS1_SPI+0)
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_magneticlinear_spiDriverInit+0
;Click_MagneticLinear_STM.c,42 :: 		}
L_end_applicationInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationInit
_applicationTask:
;Click_MagneticLinear_STM.c,44 :: 		void applicationTask()
SUB	SP, SP, #56
STR	LR, [SP, #0]
;Click_MagneticLinear_STM.c,49 :: 		magneticData = magneticlinear_readData();
BL	_magneticlinear_readData+0
;Click_MagneticLinear_STM.c,50 :: 		IntToStr(magneticData, demoText);
ADD	R1, SP, #4
BL	_IntToStr+0
;Click_MagneticLinear_STM.c,51 :: 		mikrobus_logWrite(" Magnetic Linear data : ", _LOG_TEXT);
MOVW	R0, #lo_addr(?lstr2_Click_MagneticLinear_STM+0)
MOVT	R0, #hi_addr(?lstr2_Click_MagneticLinear_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_MagneticLinear_STM.c,52 :: 		mikrobus_logWrite(demoText, _LOG_LINE);
ADD	R0, SP, #4
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_MagneticLinear_STM.c,54 :: 		mikrobus_logWrite("________________", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr3_Click_MagneticLinear_STM+0)
MOVT	R0, #hi_addr(?lstr3_Click_MagneticLinear_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_MagneticLinear_STM.c,55 :: 		Delay_ms( 200 );
MOVW	R7, #40703
MOVT	R7, #36
NOP
NOP
L_applicationTask2:
SUBS	R7, R7, #1
BNE	L_applicationTask2
NOP
NOP
NOP
;Click_MagneticLinear_STM.c,56 :: 		}
L_end_applicationTask:
LDR	LR, [SP, #0]
ADD	SP, SP, #56
BX	LR
; end of _applicationTask
_main:
;Click_MagneticLinear_STM.c,58 :: 		void main()
;Click_MagneticLinear_STM.c,60 :: 		systemInit();
BL	_systemInit+0
;Click_MagneticLinear_STM.c,61 :: 		applicationInit();
BL	_applicationInit+0
;Click_MagneticLinear_STM.c,63 :: 		while (1)
L_main4:
;Click_MagneticLinear_STM.c,65 :: 		applicationTask();
BL	_applicationTask+0
;Click_MagneticLinear_STM.c,66 :: 		}
IT	AL
BAL	L_main4
;Click_MagneticLinear_STM.c,67 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
