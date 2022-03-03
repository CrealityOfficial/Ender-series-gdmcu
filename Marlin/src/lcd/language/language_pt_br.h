/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Portuguese (Brazil)
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 * See also https://marlinfw.org/docs/development/lcd_language.html
 */
namespace Language_pt_br {
  using namespace Language_en; // Inherit undefined strings from English

  constexpr uint8_t    CHARSIZE                            = 2;
  PROGMEM Language_Str LANGUAGE                            = _UxGT("Português(BR)");

  PROGMEM Language_Str WELCOME_MSG                         = MACHINE_NAME _UxGT(" pronto.");
  PROGMEM Language_Str MSG_YES                             = _UxGT("SIM");
  PROGMEM Language_Str MSG_NO                              = _UxGT("NÃO");
  PROGMEM Language_Str MSG_BACK                            = _UxGT("Voltar");
  PROGMEM Language_Str MSG_MEDIA_ABORTING                  		= _UxGT("Cancelando");
  PROGMEM Language_Str MSG_MEDIA_INSERTED                  = _UxGT("Cartão inserido");
  PROGMEM Language_Str MSG_MEDIA_REMOVED                   = _UxGT("Cartão removido");
  PROGMEM Language_Str MSG_MEDIA_RELEASED                  = _UxGT("Cartão liberado");
  PROGMEM Language_Str MSG_MEDIA_WAITING                   		= _UxGT("Aguardando o cartão");
  PROGMEM Language_Str MSG_MEDIA_READ_ERROR                		= _UxGT("Erro de leitura no cartão");
  PROGMEM Language_Str MSG_MEDIA_USB_REMOVED               = _UxGT("USB removido");
  PROGMEM Language_Str MSG_MEDIA_USB_FAILED                		= _UxGT("Falha de acesso USB");
  PROGMEM Language_Str MSG_LCD_ENDSTOPS                    		= _UxGT("P.final");
  PROGMEM Language_Str MSG_LCD_SOFT_ENDSTOPS               		= _UxGT("P.final suave");
  PROGMEM Language_Str MSG_MAIN                            		= _UxGT("Início");
  PROGMEM Language_Str MSG_ADVANCED_SETTINGS               		= _UxGT("Ajustes avançados");
  PROGMEM Language_Str MSG_CONFIGURATION                   		= _UxGT("Ajuste");
  PROGMEM Language_Str MSG_RUN_AUTO_FILES                  = _UxGT("Início automático");
PROGMEM Language_Str MSG_DISABLE_STEPPERS                		= _UxGT("Desativar motores");
  PROGMEM Language_Str MSG_DEBUG_MENU                      		= _UxGT("Menu de Depuração");
  PROGMEM Language_Str MSG_PROGRESS_BAR_TEST               		= _UxGT("Teste de barra de progresso");
  PROGMEM Language_Str MSG_AUTO_HOME                       		= _UxGT("Ponto Zero");
  PROGMEM Language_Str MSG_AUTO_HOME_X                     		= _UxGT("Início X");
  PROGMEM Language_Str MSG_AUTO_HOME_Y                     		= _UxGT("Início Y");
  PROGMEM Language_Str MSG_AUTO_HOME_Z                     		= _UxGT("Início Z");
  PROGMEM Language_Str MSG_AUTO_Z_ALIGN                    		= _UxGT("Auto Alinhar-Z");
  PROGMEM Language_Str MSG_LEVEL_BED_HOMING                		= _UxGT("Aos inícios XYZ");
  PROGMEM Language_Str MSG_LEVEL_BED_WAITING               		= _UxGT("Clique para começar");
  PROGMEM Language_Str MSG_LEVEL_BED_NEXT_POINT            = _UxGT("Próximo Ponto");
    PROGMEM Language_Str MSG_LEVEL_BED_DONE                  		= _UxGT("Nivelamento concluído!");
  PROGMEM Language_Str MSG_Z_FADE_HEIGHT                   		= _UxGT("Altura de dispersão");
  PROGMEM Language_Str MSG_SET_HOME_OFFSETS                		= _UxGT("Ajustar Origem");
  PROGMEM Language_Str MSG_HOME_OFFSETS_APPLIED            		= _UxGT("Compensações aplicadas");
  PROGMEM Language_Str MSG_SET_ORIGIN                      		= _UxGT("Definir origem"); 
 #if PREHEAT_COUNT
    PROGMEM Language_Str MSG_PREHEAT_1                     = _UxGT("Pré-aquecer ") PREHEAT_1_LABEL;
    PROGMEM Language_Str MSG_PREHEAT_1_H                   = _UxGT("Pré-aquecer ") PREHEAT_1_LABEL " ~";
    PROGMEM Language_Str MSG_PREHEAT_1_END                 = _UxGT("Pré-aquecer ") PREHEAT_1_LABEL _UxGT(" Bico");
    PROGMEM Language_Str MSG_PREHEAT_1_END_E               = _UxGT("Pré-aquecer ") PREHEAT_1_LABEL _UxGT(" Bico ~");
    PROGMEM Language_Str MSG_PREHEAT_1_ALL                 = _UxGT("Pré-aquecer ") PREHEAT_1_LABEL _UxGT(" Ambos");
    PROGMEM Language_Str MSG_PREHEAT_1_BEDONLY             = _UxGT("Pré-aquecer ") PREHEAT_1_LABEL _UxGT(" Mesa");
    PROGMEM Language_Str MSG_PREHEAT_1_SETTINGS            = _UxGT("Pré-aquecer ") PREHEAT_1_LABEL _UxGT(" Conf");

    PROGMEM Language_Str MSG_PREHEAT_M                     = _UxGT("Pré-aquecer $");     //"Preheat PREHEAT_2_LABEL"
    PROGMEM Language_Str MSG_PREHEAT_M_H                   = _UxGT("Pré-aquecer $ ~");     //"Preheat PREHEAT_2_LABEL"
    PROGMEM Language_Str MSG_PREHEAT_M_END                 = _UxGT("Pré-aquecer $ Bico");
    PROGMEM Language_Str MSG_PREHEAT_M_END_E               = _UxGT("Pré-aquecer $ Bico ~");
    PROGMEM Language_Str MSG_PREHEAT_M_ALL                 = _UxGT("Pré-aquecer $ Ambos");
    PROGMEM Language_Str MSG_PREHEAT_M_BEDONLY             = _UxGT("Pré-aquecer $ Mesa");
    PROGMEM Language_Str MSG_PREHEAT_M_SETTINGS            = _UxGT("Pré-aquecer $ Conf");
  #endif

  PROGMEM Language_Str MSG_PREHEAT_CUSTOM                  		= _UxGT("Pré-aquecer Personalizado");
  PROGMEM Language_Str MSG_COOLDOWN                        = _UxGT("Esfriar");
  PROGMEM Language_Str MSG_SWITCH_PS_ON                    = _UxGT("Ligar");
  PROGMEM Language_Str MSG_SWITCH_PS_OFF                   = _UxGT("Desligar");
  PROGMEM Language_Str MSG_EXTRUDE                         = _UxGT("Extrusar");
  PROGMEM Language_Str MSG_RETRACT                         = _UxGT("Retrair");
  PROGMEM Language_Str MSG_MOVE_AXIS                       		= _UxGT("Mover Eixo");
  PROGMEM Language_Str MSG_BED_LEVELING                    		= _UxGT("Nivelamento da Mesa");
  PROGMEM Language_Str MSG_LEVEL_BED                       		= _UxGT("Nível da Mesa");
  PROGMEM Language_Str MSG_LEVEL_CORNERS                   		= _UxGT("Nível dos Cantos");
  PROGMEM Language_Str MSG_NEXT_CORNER                     		= _UxGT("Próximo canto");
  PROGMEM Language_Str MSG_MESH_EDITOR                     		= _UxGT("Editor de malha");
  PROGMEM Language_Str MSG_EDIT_MESH                       		= _UxGT("Editar malha");
  PROGMEM Language_Str MSG_EDITING_STOPPED                 		= _UxGT("Edição de malha interrompida");
  PROGMEM Language_Str MSG_PROBING_MESH                    		= _UxGT("Ponto de Testagem");
  PROGMEM Language_Str MSG_MESH_X                          = _UxGT("Índice X");
  PROGMEM Language_Str MSG_MESH_Y                          = _UxGT("Índice Y");
  PROGMEM Language_Str MSG_MESH_EDIT_Z                     = _UxGT("Valor Z");
  PROGMEM Language_Str MSG_CUSTOM_COMMANDS                 = _UxGT("Comando customizado");
PROGMEM Language_Str MSG_M48_TEST                        		= _UxGT("Teste de pontos M48");
  PROGMEM Language_Str MSG_M48_POINT                       		= _UxGT("Ponto M48");
  PROGMEM Language_Str MSG_M48_DEVIATION                   		= _UxGT("Desvio");
  PROGMEM Language_Str MSG_IDEX_MENU                       = _UxGT("Modo IDEX");
  PROGMEM Language_Str MSG_OFFSETS_MENU                    		= _UxGT("Ferramentas de Compensação");
  PROGMEM Language_Str MSG_IDEX_MODE_AUTOPARK              = _UxGT("Auto-Estacionar");
  PROGMEM Language_Str MSG_IDEX_MODE_DUPLICATE             = _UxGT("Duplicação");
  PROGMEM Language_Str MSG_IDEX_MODE_MIRRORED_COPY         		= _UxGT("Cópia Espelhada");
  PROGMEM Language_Str MSG_IDEX_MODE_FULL_CTRL             		= _UxGT("Controle total");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_X                 		= _UxGT("2º Bico X");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Y                 		= _UxGT("2º Bico Y");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Z                 		= _UxGT("2º Bico Z");
  PROGMEM Language_Str MSG_UBL_DOING_G29                   		= _UxGT("Fazendo G29");
  PROGMEM Language_Str MSG_UBL_TOOLS                       = _UxGT("Ferramentas UBL");
  PROGMEM Language_Str MSG_UBL_LEVEL_BED                   		= _UxGT("Nivelamento unificado da mesa");
  PROGMEM Language_Str MSG_UBL_MANUAL_MESH                 = _UxGT("Fazer malha manual");
  PROGMEM Language_Str MSG_UBL_BC_INSERT                   		= _UxGT("Colocar calço & Medida");
  PROGMEM Language_Str MSG_UBL_BC_INSERT2                  		= _UxGT("Medida");
  PROGMEM Language_Str MSG_UBL_BC_REMOVE                   		= _UxGT("Remover & Medir a Mesa");
  PROGMEM Language_Str MSG_UBL_MOVING_TO_NEXT              		= _UxGT("Indo ao próximo");
  PROGMEM Language_Str MSG_UBL_ACTIVATE_MESH               = _UxGT("Ativar UBL");
  PROGMEM Language_Str MSG_UBL_DEACTIVATE_MESH             = _UxGT("Desativar UBL");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_BED                		= _UxGT("Temperatura da Mesa");
  PROGMEM Language_Str MSG_UBL_BED_TEMP_CUSTOM             		= _UxGT("Temperatura da Mesa");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_HOTEND             		= _UxGT("Temp. de Extrusora");
  PROGMEM Language_Str MSG_UBL_HOTEND_TEMP_CUSTOM          		= _UxGT("Temp. de Extrusora");
  PROGMEM Language_Str MSG_UBL_MESH_EDIT                   = _UxGT("Editar Malha");
PROGMEM Language_Str MSG_UBL_EDIT_CUSTOM_MESH            		= _UxGT("Editar Malha personalizado");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_MESH              		= _UxGT("Sintonia Fina da Malha");
  PROGMEM Language_Str MSG_UBL_DONE_EDITING_MESH           		= _UxGT("Edição da malha pronta");
  PROGMEM Language_Str MSG_UBL_BUILD_CUSTOM_MESH           		= _UxGT("Construir Malha Personalizada");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_MENU             		= _UxGT("Construir malha");
  #if PREHEAT_COUNT
    PROGMEM Language_Str MSG_UBL_BUILD_MESH_M              = _UxGT("Montar $");
    PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M           = _UxGT("Checar $");
  #endif
  PROGMEM Language_Str MSG_UBL_BUILD_COLD_MESH             = _UxGT("Montar Malha fria");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_ADJUST          = _UxGT("Ajustar Altura");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_AMOUNT          = _UxGT("Quant. de Altura");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_MENU          = _UxGT("Validar Malha");
  PROGMEM Language_Str MSG_UBL_VALIDATE_CUSTOM_MESH        = _UxGT("Validar Malha Custom");
  PROGMEM Language_Str MSG_G26_HEATING_BED                 = _UxGT("G26 Aquecendo Mesa");
  PROGMEM Language_Str MSG_G26_HEATING_NOZZLE              = _UxGT("G26 Aquecendo Ext.");
  PROGMEM Language_Str MSG_G26_CANCELED                    = _UxGT("G26 Cancelado");
  PROGMEM Language_Str MSG_G26_LEAVING                     = _UxGT("G26 Saindo");
  PROGMEM Language_Str MSG_UBL_CONTINUE_MESH               = _UxGT("Continuar Malha");
  PROGMEM Language_Str MSG_UBL_MESH_LEVELING               = _UxGT("Nivelação da Malha");
  PROGMEM Language_Str MSG_UBL_3POINT_MESH_LEVELING        = _UxGT("Nivelação 3 pontos");
  PROGMEM Language_Str MSG_UBL_GRID_MESH_LEVELING          = _UxGT("Nivelação Grid");
  PROGMEM Language_Str MSG_UBL_MESH_LEVEL                  = _UxGT("Nivelar Malha");
  PROGMEM Language_Str MSG_UBL_SIDE_POINTS                 = _UxGT("Cantos");
  PROGMEM Language_Str MSG_UBL_MAP_TYPE                    = _UxGT("Tipo de Mapa");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP                  = _UxGT("Salvar Mapa da Malha");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_HOST             = _UxGT("Enviar Para Host");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_CSV              = _UxGT("Salvar Malha CSV");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_BACKUP           = _UxGT("Salvar Backup");
  PROGMEM Language_Str MSG_UBL_INFO_UBL                    = _UxGT("Informação do UBL");
  PROGMEM Language_Str MSG_UBL_FILLIN_AMOUNT               = _UxGT("Qtd de Enchimento");
  PROGMEM Language_Str MSG_UBL_MANUAL_FILLIN               = _UxGT("Enchimento Manual");
  PROGMEM Language_Str MSG_UBL_SMART_FILLIN                = _UxGT("Enchimento Smart");
  PROGMEM Language_Str MSG_UBL_FILLIN_MESH                 = _UxGT("Preencher malha");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_ALL              = _UxGT("Invalidar tudo");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_CLOSEST          = _UxGT("Invalidar próximo");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_ALL               		= _UxGT("Ajuste fino total");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_CLOSEST           		= _UxGT("Ajuste fino próximo");
  PROGMEM Language_Str MSG_UBL_STORAGE_MESH_MENU           		= _UxGT("Armazenar malha");
  PROGMEM Language_Str MSG_UBL_STORAGE_SLOT                		= _UxGT("Slot de memória");
  PROGMEM Language_Str MSG_UBL_LOAD_MESH                   		= _UxGT("Carregar malha da mesa");
  PROGMEM Language_Str MSG_UBL_SAVE_MESH                   		= _UxGT("Salvar malha da mesa");
  PROGMEM Language_Str MSG_MESH_LOADED                     		= _UxGT("Malha M117 %i Carregada");
  PROGMEM Language_Str MSG_MESH_SAVED                      		= _UxGT("Malha M117 %i Salva");
  PROGMEM Language_Str MSG_UBL_NO_STORAGE                  		= _UxGT("Nenhum armazenamento");
  PROGMEM Language_Str MSG_UBL_SAVE_ERROR                  		= _UxGT("Err: Salvar UBL");
  PROGMEM Language_Str MSG_UBL_RESTORE_ERROR               		= _UxGT("Err: Restaurar UBL");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET                    		= _UxGT("Deslocamento-Z:");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET_STOPPED            		= _UxGT("Deslocamento-Z Parada");
  PROGMEM Language_Str MSG_UBL_STEP_BY_STEP_MENU           = _UxGT("UBL passo a passo");
  PROGMEM Language_Str MSG_UBL_1_BUILD_COLD_MESH           		= _UxGT("1. Construir malha fria");
  PROGMEM Language_Str MSG_UBL_2_SMART_FILLIN              		= _UxGT("2. Preenchimento inteligente");
  PROGMEM Language_Str MSG_UBL_3_VALIDATE_MESH_MENU        		= _UxGT("3. Validar malha");
  PROGMEM Language_Str MSG_UBL_4_FINE_TUNE_ALL             		= _UxGT("4. Ajustar tudo");
  PROGMEM Language_Str MSG_UBL_5_VALIDATE_MESH_MENU        		= _UxGT("5. Validar malha");
  PROGMEM Language_Str MSG_UBL_6_FINE_TUNE_ALL             		= _UxGT("6. Ajuste fino de tudo");
  PROGMEM Language_Str MSG_UBL_7_SAVE_MESH                 = _UxGT("7.Salvar Malha");

  PROGMEM Language_Str MSG_LED_CONTROL                     		= _UxGT("Controlar LED");
  PROGMEM Language_Str MSG_LEDS                            		= _UxGT("Luzes");
  PROGMEM Language_Str MSG_LED_PRESETS                     		= _UxGT("Predefinições de luz");
  PROGMEM Language_Str MSG_SET_LEDS_RED                    		= _UxGT("Vermelho");
  PROGMEM Language_Str MSG_SET_LEDS_ORANGE                 		= _UxGT("laranja");
  PROGMEM Language_Str MSG_SET_LEDS_YELLOW                 		= _UxGT("Amarelo");
  PROGMEM Language_Str MSG_SET_LEDS_GREEN                  		= _UxGT("Verde");
  PROGMEM Language_Str MSG_SET_LEDS_BLUE                   		= _UxGT("Azul");
  PROGMEM Language_Str MSG_SET_LEDS_INDIGO                 		= _UxGT("Índigo");
  PROGMEM Language_Str MSG_SET_LEDS_VIOLET                 		= _UxGT("Violeta");
  PROGMEM Language_Str MSG_SET_LEDS_WHITE                  		= _UxGT("Branco");
  PROGMEM Language_Str MSG_SET_LEDS_DEFAULT                		= _UxGT("Padrão");
  PROGMEM Language_Str MSG_CUSTOM_LEDS                     		= _UxGT("Luzes personalizadas");
  PROGMEM Language_Str MSG_INTENSITY_R                     		= _UxGT("Intensidade Vermelha");
  PROGMEM Language_Str MSG_INTENSITY_G                     = _UxGT("Intensidade Verde");
  PROGMEM Language_Str MSG_INTENSITY_B                     = _UxGT("Intensidade Azul");
  PROGMEM Language_Str MSG_INTENSITY_W                     		= _UxGT("Intensidade de Branco");
  PROGMEM Language_Str MSG_LED_BRIGHTNESS                  = _UxGT("Brilho");

  PROGMEM Language_Str MSG_MOVING                          = _UxGT("Movendo...");
  PROGMEM Language_Str MSG_FREE_XY                         		= _UxGT("Liberar X-Y");
  PROGMEM Language_Str MSG_MOVE_X                          = _UxGT("Mover X");
  PROGMEM Language_Str MSG_MOVE_Y                          = _UxGT("Mover Y");
  PROGMEM Language_Str MSG_MOVE_Z                          = _UxGT("Mover Z");
PROGMEM Language_Str MSG_MOVE_E                          		= _UxGT("Extrusora");
  PROGMEM Language_Str MSG_MOVE_EN                         		= _UxGT("Extrusora *");
  PROGMEM Language_Str MSG_HOTEND_TOO_COLD                 		= _UxGT("Extrusora Fria");
  PROGMEM Language_Str MSG_MOVE_N_MM                       = _UxGT("Mover %smm");
  PROGMEM Language_Str MSG_MOVE_01MM                       = _UxGT("Mover 0.1mm");
  PROGMEM Language_Str MSG_MOVE_1MM                        = _UxGT("Mover 1mm");
  PROGMEM Language_Str MSG_MOVE_10MM                       = _UxGT("Mover 10mm");
  PROGMEM Language_Str MSG_SPEED                           = _UxGT("Velocidade");
  PROGMEM Language_Str MSG_BED_Z                           		= _UxGT("Mesa Z");
  PROGMEM Language_Str MSG_NOZZLE                          		= _UxGT("Bico");
  PROGMEM Language_Str MSG_NOZZLE_N                        		= _UxGT("Bico ~");
  PROGMEM Language_Str MSG_BED                             = _UxGT("Mesa");
  PROGMEM Language_Str MSG_FAN_SPEED                       = _UxGT("Vel. Ventoinha");
  PROGMEM Language_Str MSG_FAN_SPEED_N                     = _UxGT("Vel. Ventoinha ~");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED                 = _UxGT("+Vel. Ventoinha");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED_N               		= _UxGT("Veloc. Fan extra =");
  PROGMEM Language_Str MSG_FLOW                            		= _UxGT("Fluxo");
  PROGMEM Language_Str MSG_FLOW_N                          		= _UxGT("Fluxo ~");
  PROGMEM Language_Str MSG_CONTROL                         = _UxGT("Controle");
  PROGMEM Language_Str MSG_MIN                             		= " " LCD_STR_THERMOMETER _UxGT(" mín.");
  PROGMEM Language_Str MSG_MAX                             		= " " LCD_STR_THERMOMETER _UxGT(" máx.");
  PROGMEM Language_Str MSG_FACTOR                          		= " " LCD_STR_THERMOMETER _UxGT(" Fato");
  PROGMEM Language_Str MSG_AUTOTEMP                        		= _UxGT("Auto-Temp.");
  PROGMEM Language_Str MSG_LCD_ON                          = _UxGT("Ligado");
  PROGMEM Language_Str MSG_LCD_OFF                         = _UxGT("Desligado");
  PROGMEM Language_Str MSG_PID_AUTOTUNE                    		= _UxGT("PID Auto-Ajuste");
  PROGMEM Language_Str MSG_PID_AUTOTUNE_E                  		= _UxGT("PID Auto-Ajuste *");
  PROGMEM Language_Str MSG_PID_P                           		= _UxGT("PID-P  ");
  PROGMEM Language_Str MSG_PID_P_E                         		= _UxGT("PID-P *  ");
  PROGMEM Language_Str MSG_PID_I                           		= _UxGT("PID-I  ");
  PROGMEM Language_Str MSG_PID_I_E                         		= _UxGT("PID-I *  ");
  PROGMEM Language_Str MSG_PID_D                           		= _UxGT("PID-D  ");
  PROGMEM Language_Str MSG_PID_D_E                         		= _UxGT("PID-D *  ");
  PROGMEM Language_Str MSG_PID_C                           		= _UxGT("PID-C  ");
  PROGMEM Language_Str MSG_PID_C_E                         		= _UxGT("PID-C *  ");
  PROGMEM Language_Str MSG_SELECT                          = _UxGT("Selecionar");
  PROGMEM Language_Str MSG_SELECT_E                        = _UxGT("Selecionar *");
  PROGMEM Language_Str MSG_ACC                             		= _UxGT("Aceleração");
  PROGMEM Language_Str MSG_JERK                            		= _UxGT("Empurrão");
  PROGMEM Language_Str MSG_VA_JERK                         		= _UxGT("V") LCD_STR_A _UxGT("Empurrão");
  PROGMEM Language_Str MSG_VB_JERK                         		= _UxGT("V") LCD_STR_B _UxGT("Empurrão");
  PROGMEM Language_Str MSG_VC_JERK                         		= _UxGT("V") LCD_STR_C _UxGT("Empurrão");
  PROGMEM Language_Str MSG_VE_JERK                         		= _UxGT("Vel-Empurrão");
  PROGMEM Language_Str MSG_JUNCTION_DEVIATION              		= _UxGT("Desvio de Junção");
  PROGMEM Language_Str MSG_VELOCITY                        = _UxGT("Velocidade");
  PROGMEM Language_Str MSG_VTRAV_MIN                       = _UxGT("VDeslocamento min");
  PROGMEM Language_Str MSG_ACCELERATION                    = _UxGT("Aceleração");
  PROGMEM Language_Str MSG_A_RETRACT                       = _UxGT("Retrair A");
  PROGMEM Language_Str MSG_A_TRAVEL                        = _UxGT("Movimento A");
  PROGMEM Language_Str MSG_STEPS_PER_MM                    = _UxGT("Passo/mm");
  PROGMEM Language_Str MSG_A_STEPS                         = _UxGT("Passo ") LCD_STR_A _UxGT("/mm");
  PROGMEM Language_Str MSG_B_STEPS                         = _UxGT("Passo ") LCD_STR_B _UxGT("/mm");
  PROGMEM Language_Str MSG_C_STEPS                         = _UxGT("Passo ") LCD_STR_C _UxGT("/mm");
  PROGMEM Language_Str MSG_E_STEPS                         = _UxGT("E/mm");
  PROGMEM Language_Str MSG_EN_STEPS                        = _UxGT("*/mm");
  PROGMEM Language_Str MSG_TEMPERATURE                     = _UxGT("Temperatura");
  PROGMEM Language_Str MSG_MOTION                          = _UxGT("Movimento");
  PROGMEM Language_Str MSG_FILAMENT                        = _UxGT("Filamento");
  PROGMEM Language_Str MSG_VOLUMETRIC_ENABLED              		= _UxGT("E em mm³");
  PROGMEM Language_Str MSG_FILAMENT_DIAM                   		= _UxGT("Fil. Dia.");
  PROGMEM Language_Str MSG_FILAMENT_DIAM_E                 		= _UxGT("Fil. Dia. *");
  PROGMEM Language_Str MSG_FILAMENT_UNLOAD                 		= _UxGT("Descarregar mm");
  PROGMEM Language_Str MSG_FILAMENT_LOAD                   = _UxGT("Carregar mm");
PROGMEM Language_Str MSG_ADVANCE_K                       		= _UxGT("Avançar K");
  PROGMEM Language_Str MSG_ADVANCE_K_E                     		= _UxGT("Avançar K *");
  PROGMEM Language_Str MSG_CONTRAST                        		= _UxGT("Contraste LCD");
  PROGMEM Language_Str MSG_STORE_EEPROM                    		= _UxGT("Salvar ajustes");
  PROGMEM Language_Str MSG_LOAD_EEPROM                     		= _UxGT("Carregar ajustes");
  PROGMEM Language_Str MSG_RESTORE_DEFAULTS                = _UxGT("Restauro seguro");
  PROGMEM Language_Str MSG_INIT_EEPROM                     		= _UxGT("Inicializar EEPROM");
  PROGMEM Language_Str MSG_MEDIA_UPDATE                    		= _UxGT("Atualização do cartão");
  PROGMEM Language_Str MSG_RESET_PRINTER                   		= _UxGT("Reiniciar impressora");
  PROGMEM Language_Str MSG_REFRESH                         		= LCD_STR_REFRESH  _UxGT("Atualizar");
  PROGMEM Language_Str MSG_INFO_SCREEN                     = _UxGT("Informações");
  PROGMEM Language_Str MSG_PREPARE                         = _UxGT("Preparar");
  PROGMEM Language_Str MSG_TUNE                            		= _UxGT("Afinação");
  PROGMEM Language_Str MSG_START_PRINT                     		= _UxGT("Iniciar impressão");
  PROGMEM Language_Str MSG_BUTTON_NEXT                     		= _UxGT("Próximo");
  PROGMEM Language_Str MSG_BUTTON_INIT                     = _UxGT("Iniciar");
  PROGMEM Language_Str MSG_BUTTON_PAUSE                    		= _UxGT("Pausar ");
  PROGMEM Language_Str MSG_BUTTON_RESUME                   		= _UxGT("Resumir");
  PROGMEM Language_Str MSG_BUTTON_STOP                     = _UxGT("Parar");
  PROGMEM Language_Str MSG_BUTTON_PRINT                    = _UxGT("Imprimir");
  PROGMEM Language_Str MSG_BUTTON_RESET                    		= _UxGT("Redefinir");
  PROGMEM Language_Str MSG_BUTTON_CANCEL                   = _UxGT("Cancelar");
  PROGMEM Language_Str MSG_BUTTON_DONE                     		= _UxGT("Feito");
  PROGMEM Language_Str MSG_BUTTON_BACK                     = _UxGT("Voltar");
  PROGMEM Language_Str MSG_BUTTON_PROCEED                  		= _UxGT("Prosseguir");
  PROGMEM Language_Str MSG_PAUSE_PRINT                     = _UxGT("Pausar impressão");
  PROGMEM Language_Str MSG_RESUME_PRINT                    = _UxGT("Continuar impressão");
  PROGMEM Language_Str MSG_STOP_PRINT                      = _UxGT("Parar impressão");
  PROGMEM Language_Str MSG_PRINTING_OBJECT                 = _UxGT("Imprimindo objeto");
  PROGMEM Language_Str MSG_CANCEL_OBJECT                   = _UxGT("Cancelar Objeto");
  PROGMEM Language_Str MSG_CANCEL_OBJECT_N                 = _UxGT("Cancelar Objeto =");
  PROGMEM Language_Str MSG_OUTAGE_RECOVERY                 		= _UxGT("Recuperar de interrupção");
  PROGMEM Language_Str MSG_MEDIA_MENU                      		= _UxGT("Imprimir do TF");
  PROGMEM Language_Str MSG_NO_MEDIA                        		= _UxGT("Sem cartão TF");
  PROGMEM Language_Str MSG_DWELL                           		= _UxGT("Dormir...");
  PROGMEM Language_Str MSG_USERWAIT                        		= _UxGT("Clique para retomar ...");
  PROGMEM Language_Str MSG_PRINT_PAUSED                    		= _UxGT("Impressão pausada");
  PROGMEM Language_Str MSG_PRINTING                        = _UxGT("Imprimindo...");
  PROGMEM Language_Str MSG_PRINT_ABORTED                   		= _UxGT("Impressão abortada");
  PROGMEM Language_Str MSG_NO_MOVE                         		= _UxGT("Não movimentar.");
  PROGMEM Language_Str MSG_KILLED                          		= _UxGT("FINALIZADO.");
  PROGMEM Language_Str MSG_STOPPED                         		= _UxGT("PARADO.");
  PROGMEM Language_Str MSG_CONTROL_RETRACT                 = _UxGT("Retrair mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_SWAP            		= _UxGT("Trocar Ret. mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACTF                = _UxGT("Retrair V");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_ZHOP            		= _UxGT("Salto mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER         		= _UxGT("Desfazer Ret. mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAP    		= _UxGT("S Desfazer Ret. mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVERF        		= _UxGT("Desfazer Ret. V");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAPF   		= _UxGT("S Desfazer Ret. V");
  PROGMEM Language_Str MSG_AUTORETRACT                     		= _UxGT("Retrair-Auto");
  PROGMEM Language_Str MSG_FILAMENT_SWAP_LENGTH            		= _UxGT("Comprimento de troca");
  PROGMEM Language_Str MSG_FILAMENT_PURGE_LENGTH           		= _UxGT("Comprimento de purga");
  PROGMEM Language_Str MSG_TOOL_CHANGE                     		= _UxGT("Ferramenta de troca");
  PROGMEM Language_Str MSG_TOOL_CHANGE_ZLIFT               		= _UxGT("Elevar Z");
  PROGMEM Language_Str MSG_SINGLENOZZLE_PRIME_SPD          		= _UxGT("Velocidade principal");
  PROGMEM Language_Str MSG_SINGLENOZZLE_RETRACT_SPD        		= _UxGT("Velocidade de retração");
  PROGMEM Language_Str MSG_NOZZLE_STANDBY                  		= _UxGT("Bico em espera");
  PROGMEM Language_Str MSG_FILAMENTCHANGE                  = _UxGT("Trocar Filamento");
  PROGMEM Language_Str MSG_FILAMENTCHANGE_E                = _UxGT("Trocar Filamento *");
  PROGMEM Language_Str MSG_FILAMENTLOAD                    = _UxGT("Carregar Filamento");
  PROGMEM Language_Str MSG_FILAMENTLOAD_E                  = _UxGT("Carregar Filamento *");
PROGMEM Language_Str MSG_FILAMENTUNLOAD                  		= _UxGT("Remover Filamento");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_E                		= _UxGT("Remover Filamento *");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_ALL              		= _UxGT("Remover tudo");
  PROGMEM Language_Str MSG_ATTACH_MEDIA                    = _UxGT("Iniciar SD");
  PROGMEM Language_Str MSG_CHANGE_MEDIA                    		= _UxGT("Alterar cartão TF");
  PROGMEM Language_Str MSG_RELEASE_MEDIA                   		= _UxGT("Liberar cartão TF");
  PROGMEM Language_Str MSG_ZPROBE_OUT                      		= _UxGT("Z Sensor da Mesa");
  PROGMEM Language_Str MSG_SKEW_FACTOR                     		= _UxGT("Fator de inclinação");
  PROGMEM Language_Str MSG_BLTOUCH                         = _UxGT("BLTouch");
  PROGMEM Language_Str MSG_BLTOUCH_SELFTEST                		= _UxGT("Cmd: Auto-Teste");
  PROGMEM Language_Str MSG_BLTOUCH_RESET                   		= _UxGT("Cmd: Reiniciar");
  PROGMEM Language_Str MSG_BLTOUCH_STOW                    		= _UxGT("Cmd: Arrumar");
  PROGMEM Language_Str MSG_BLTOUCH_DEPLOY                  		= _UxGT("Cmd: Implantar");
  PROGMEM Language_Str MSG_MANUAL_DEPLOY                   = _UxGT("Estender Sonda-Z");
  PROGMEM Language_Str MSG_MANUAL_STOW                     = _UxGT("Recolher Sonda-Z");
  PROGMEM Language_Str MSG_HOME_FIRST                      = _UxGT("Home %s%s%s Primeiro");
  PROGMEM Language_Str MSG_ZPROBE_OFFSETS                  = _UxGT("Compensar Sonda");
  PROGMEM Language_Str MSG_ZPROBE_XOFFSET                  = _UxGT("Compensar Sonda em X");
  PROGMEM Language_Str MSG_ZPROBE_YOFFSET                  = _UxGT("Compensar Sonda em Y");
  PROGMEM Language_Str MSG_ZPROBE_ZOFFSET                  = _UxGT("Compensar Sonda em Z");
  PROGMEM Language_Str MSG_BABYSTEP_X                      = _UxGT("Passinho X");
  PROGMEM Language_Str MSG_BABYSTEP_Y                      = _UxGT("Passinho Y");
  PROGMEM Language_Str MSG_BABYSTEP_Z                      = _UxGT("Passinho Z");
  PROGMEM Language_Str MSG_BABYSTEP_TOTAL                  = _UxGT("Total");
  PROGMEM Language_Str MSG_ENDSTOP_ABORT                   = _UxGT("Abortar Fim de Curso");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD              = _UxGT("Aquecimento falhou");
  PROGMEM Language_Str MSG_ERR_REDUNDANT_TEMP              = _UxGT("Erro:Temp Redundante");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY                 = _UxGT("ESCAPE TÉRMICO");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_BED             = _UxGT("ESCAPE TÉRMICO MESA");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_CHAMBER         = _UxGT("ESCAPE TÉRMICO CAMARA");
  PROGMEM Language_Str MSG_ERR_MAXTEMP                     = _UxGT("Erro:Temp Máxima");
  PROGMEM Language_Str MSG_ERR_MINTEMP                     = _UxGT("Erro:Temp Mínima");
  PROGMEM Language_Str MSG_HALTED                          = _UxGT("IMPRESSORA PAROU");
  PROGMEM Language_Str MSG_PLEASE_RESET                    = _UxGT("Favor resetar");
  PROGMEM Language_Str MSG_SHORT_DAY                       = _UxGT("d");
  PROGMEM Language_Str MSG_SHORT_HOUR                      = _UxGT("h");
  PROGMEM Language_Str MSG_SHORT_MINUTE                    = _UxGT("m");
  PROGMEM Language_Str MSG_HEATING                         = _UxGT("Aquecendo...");
  PROGMEM Language_Str MSG_EXTRUDERS_HEATING                  = _UxGT("Aquecendo Extrusoras...");
  PROGMEM Language_Str MSG_EXTRUDERS_COOLING                  = _UxGT("Resfriando Extrusoras...");
  PROGMEM Language_Str MSG_COOLING                         = _UxGT("Resfriando...");
  PROGMEM Language_Str MSG_BED_HEATING                     		= _UxGT("Aquecendo ...");
  PROGMEM Language_Str MSG_BED_COOLING                     		= _UxGT("Resfriando mesa ...");
  PROGMEM Language_Str MSG_CHAMBER_HEATING                 = _UxGT("Aquecendo Câmara...");
  PROGMEM Language_Str MSG_CHAMBER_COOLING                 		= _UxGT("Resfriando Câmara ...");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE                 		= _UxGT("Calibração Delta");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_X               = _UxGT("Calibrar X");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Y               = _UxGT("Calibrar Y");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Z               = _UxGT("Calibrar Z");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_CENTER          		= _UxGT("Calibrar centro");
  PROGMEM Language_Str MSG_DELTA_SETTINGS                  		= _UxGT("Ajustes Delta");
  PROGMEM Language_Str MSG_DELTA_AUTO_CALIBRATE            		= _UxGT("Calibração Automática");
  PROGMEM Language_Str MSG_DELTA_HEIGHT_CALIBRATE          		= _UxGT("Definir altura delta");
  PROGMEM Language_Str MSG_DELTA_Z_OFFSET_CALIBRATE        		= _UxGT("Desvio do Sensor Z");
  PROGMEM Language_Str MSG_DELTA_DIAG_ROD                  		= _UxGT("Aste Diag. Delta");
  PROGMEM Language_Str MSG_DELTA_HEIGHT                    = _UxGT("Altura");
  PROGMEM Language_Str MSG_DELTA_RADIUS                    = _UxGT("Raio");
  PROGMEM Language_Str MSG_INFO_MENU                       		= _UxGT("Sobre a impressora");
  PROGMEM Language_Str MSG_INFO_PRINTER_MENU               		= _UxGT("Informações da impressora");
  PROGMEM Language_Str MSG_3POINT_LEVELING                 		= _UxGT("Nivelamento de 3 pontos");
  PROGMEM Language_Str MSG_LINEAR_LEVELING                 = _UxGT("Nivelamento Linear");
  PROGMEM Language_Str MSG_BILINEAR_LEVELING               = _UxGT("Nivelamento Bilinear");
  PROGMEM Language_Str MSG_UBL_LEVELING                    		= _UxGT("Nivelamento de mesa unificado");
  PROGMEM Language_Str MSG_MESH_LEVELING                   		= _UxGT("Nivelamento de malha");
  PROGMEM Language_Str MSG_INFO_STATS_MENU                 		= _UxGT("Estatísticas da impressora");
  PROGMEM Language_Str MSG_INFO_BOARD_MENU                 		= _UxGT("Informações da placa");
  PROGMEM Language_Str MSG_INFO_THERMISTOR_MENU            = _UxGT("Termistores");
  PROGMEM Language_Str MSG_INFO_EXTRUDERS                  = _UxGT("Extrusoras");
  PROGMEM Language_Str MSG_INFO_BAUDRATE                   		= _UxGT("Transmissão");
  PROGMEM Language_Str MSG_INFO_PROTOCOL                   = _UxGT("Protocolo");
  PROGMEM Language_Str MSG_INFO_RUNAWAY_OFF                		= _UxGT("Sensor de Fuga: Desligado");
  PROGMEM Language_Str MSG_INFO_RUNAWAY_ON                 		= _UxGT("Sensor de Fuga: Ligado");

  PROGMEM Language_Str MSG_CASE_LIGHT                      		= _UxGT("Iluminação");
  PROGMEM Language_Str MSG_CASE_LIGHT_BRIGHTNESS           		= _UxGT("Brilho da Luz");
  PROGMEM Language_Str MSG_EXPECTED_PRINTER                		= _UxGT("IMPRESSORA INCORRETA");

  #if LCD_WIDTH >= 20
  PROGMEM Language_Str MSG_INFO_PRINT_COUNT     			    	= _UxGT("Contagem de impressão");
  PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS			    	= _UxGT("Concluído");
  PROGMEM Language_Str MSG_INFO_PRINT_TIME      				    = _UxGT("Tempo Total de Impressão");
  PROGMEM Language_Str MSG_INFO_PRINT_LONGEST   			      = _UxGT("Maior Tempo de Trabalho");
  PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT  				    = _UxGT("Total Extrudado");
					   
  #else
  PROGMEM Language_Str MSG_INFO_PRINT_COUNT        				= _UxGT("Impressões");
  PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS   				= _UxGT("Concluído");
  PROGMEM Language_Str MSG_INFO_PRINT_TIME         				= _UxGT("Total");
  PROGMEM Language_Str MSG_INFO_PRINT_LONGEST      				= _UxGT("Mais longo");
  PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT     				= _UxGT("Extrudado");
  #endif

  PROGMEM Language_Str MSG_INFO_MIN_TEMP                   		= _UxGT("Temp. Mín.");
  PROGMEM Language_Str MSG_INFO_MAX_TEMP                   		= _UxGT("Temp. Máx.");
  PROGMEM Language_Str MSG_INFO_PSU                        		= _UxGT("Fonte");
  PROGMEM Language_Str MSG_DRIVE_STRENGTH                  = _UxGT("Força do Motor");
  PROGMEM Language_Str MSG_DAC_EEPROM_WRITE                = _UxGT("Escrever EEPROM DAC");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER          = _UxGT("TROCA DE FILAMENTO");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_PAUSE    = _UxGT("IMPRESSÃO PAUSADA");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_LOAD     = _UxGT("CARREGAR FILAMENTO");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_UNLOAD   		= _UxGT("REMOVER FILAMENTO");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_HEADER   		= _UxGT("RETOMAR OPÇÕES:");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_PURGE    		= _UxGT("Expurgue mais");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_RESUME   		= _UxGT("Continuar");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_NOZZLE          		= _UxGT("Bico: ");
  PROGMEM Language_Str MSG_RUNOUT_SENSOR                   		= _UxGT("Sensor de falta");
  PROGMEM Language_Str MSG_KILL_HOMING_FAILED              = _UxGT("Falha ao ir à origem");
  PROGMEM Language_Str MSG_LCD_PROBING_FAILED              = _UxGT("Falha ao sondar");

  PROGMEM Language_Str MSG_MMU2_CHOOSE_FILAMENT_HEADER     = _UxGT("ESCOLHER FILAMENTO");
  PROGMEM Language_Str MSG_MMU2_MENU                       = _UxGT("MMU");

  PROGMEM Language_Str MSG_MMU2_RESUME                     = _UxGT("Continuar Impressão");
  PROGMEM Language_Str MSG_MMU2_RESUMING                   = _UxGT("Continuando...");
  PROGMEM Language_Str MSG_MMU2_LOAD_FILAMENT              = _UxGT("Carregar Filamento");
  PROGMEM Language_Str MSG_MMU2_LOAD_ALL                   		= _UxGT("Carregar tudo");
  PROGMEM Language_Str MSG_MMU2_LOAD_TO_NOZZLE             		= _UxGT("Carregar no bico");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT             = _UxGT("Ejetar Filamento");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT_N           = _UxGT("Ejetar Filamento ~");
  PROGMEM Language_Str MSG_MMU2_UNLOAD_FILAMENT            		= _UxGT("Remover Filamento");
  PROGMEM Language_Str MSG_MMU2_LOADING_FILAMENT           = _UxGT("Carregando Fil. %i...");
  PROGMEM Language_Str MSG_MMU2_EJECTING_FILAMENT          		= _UxGT("Ejetando Fil...");
  PROGMEM Language_Str MSG_MMU2_UNLOADING_FILAMENT         		= _UxGT("Removendo Fil...");
  PROGMEM Language_Str MSG_MMU2_ALL                        = _UxGT("Todos");
  PROGMEM Language_Str MSG_MMU2_FILAMENT_N                 = _UxGT("Filamento ~");
  PROGMEM Language_Str MSG_MMU2_RESET                      		= _UxGT("Reiniciar MMU");
  PROGMEM Language_Str MSG_MMU2_RESETTING                  		= _UxGT("Redefinindo MMU ...");

  PROGMEM Language_Str MSG_GAMES                           = _UxGT("Jogos");
  PROGMEM Language_Str MSG_BRICKOUT                        = _UxGT("Brickout");
  PROGMEM Language_Str MSG_INVADERS                        = _UxGT("Invasores");
  PROGMEM Language_Str MSG_SNAKE                           = _UxGT("Sn4k3");
  PROGMEM Language_Str MSG_MAZE                            = _UxGT("Labirinto");

  #if LCD_HEIGHT >= 4
  PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING       		= _UxGT(MSG_2_LINE("Pressione para","retomar a impressão"));
    PROGMEM Language_Str MSG_PAUSE_PRINT_INIT              = _UxGT(MSG_1_LINE("Estacionando..."));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT         		= _UxGT(MSG_3_LINE("Aguarde","mudança de filamento", "para começar"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT       		= _UxGT(MSG_3_LINE("Insira o filamento", "e pressione o botão para","continuar"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT         		= _UxGT(MSG_2_LINE("Pressione o botão para","aquecer o bico"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING      		= _UxGT(MSG_2_LINE("Aquecimento do bico", "Aguarde por gentileza..."));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD       		= _UxGT(MSG_2_LINE("Aguarde","remover o filamento"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD         		= _UxGT(MSG_2_LINE("Aguarde","carga de filamento"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE        		= _UxGT(MSG_2_LINE("Aguarde","expurgo do filamento"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE   		= _UxGT(MSG_2_LINE("Clique para terminar","expurgo do filamento"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME       		= _UxGT(MSG_2_LINE("Aguarde a impressão", "para retomar ..."));				   
  #else               		
  PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING       		= _UxGT(MSG_1_LINE("Clique para continuar"));
    PROGMEM Language_Str MSG_PAUSE_PRINT_INIT              = _UxGT(MSG_1_LINE("Estacionando..."));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT         		= _UxGT(MSG_1_LINE("Aguarde por gentileza..."));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT       		= _UxGT(MSG_1_LINE("Inserir e clicar"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT         		= _UxGT(MSG_1_LINE("Clique para aquecer"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING       = _UxGT(MSG_1_LINE("Aquecendo..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_1_LINE("Ejetando..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_1_LINE("Carregando..."));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE        		= _UxGT(MSG_1_LINE("Expurgando ..."));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE   		= _UxGT(MSG_1_LINE("Clique para terminar"));
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME       		= _UxGT(MSG_1_LINE("Retomando..."));
  #endif

  PROGMEM Language_Str MSG_TOP_LEFT                        = _UxGT("Superior Esquerdo");
  PROGMEM Language_Str MSG_BOTTOM_LEFT                     = _UxGT("Inferior Esquerdo");
  PROGMEM Language_Str MSG_TOP_RIGHT                       = _UxGT("Superior Direto");
  PROGMEM Language_Str MSG_BOTTOM_RIGHT                    = _UxGT("Inferior Direto");
  PROGMEM Language_Str MSG_CALIBRATION_COMPLETED           = _UxGT("Calibração Completa");
  PROGMEM Language_Str MSG_CALIBRATION_FAILED              = _UxGT("Calibração Falhou");
}
