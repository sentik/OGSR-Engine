#pragma once
// Для изменения настроек нужно создать папку build_config_overrides,
// скопировать этот файл в нее и изменить, как требуется.

// Если функция в precondition диалога не найдена, будем падать, вместо того,
// что бы просто выводить сообщение в лог и игнорировать этот precondition.
#define CRASH_ON_PRECONDITION_NOT_FOUND

// Убирает возможность назначать альтернативные кнопки. Т.е. убирает второй
// столбец в настройках и отключает консольную команду bind_sec.
#define REMOVE_ALTERNATIVE_KEYBOARD_BINDING

// Включает использование шейдерного кэша
//#define USE_SHADER_CACHE

// Другая реализация равнозначных слотов, из xp-dev. Позволяет задавать список
// допустимых слотов в параметре "slot". Вот так:
//   slot = 2,3
//#define NEW_WPN_SLOTS

// Оружие на классе бинокля будет вести себя, как оружие,
// т.е. стрелять, показывать кол-во патронов на худе и т.п. Бинокль
// тоже будет показывать на худе кол-во патронов, 0 патронов. В
// качестве альтернативы, нужному оружию можно добавить один из
// следующих параметров или оба, в зависимости от желаемого результат:
//
// scope_dynamic_zoom = true
// vision_present     = true
//
// и при прицеливании оно будет обладать свойствами бинокля. Еще нужно
// не забыть добавить в секцию этого оружия настройки для бинокля.
#define BINOC_FIRING

// Отключает возможность переключаться между слотами колесиком мыши.
// http://www.amk-team.ru/forum/topic/13383-soc-melkie-pravki-dvizhka/?do=findComment&comment=1124304
#define NO_MOUSE_WHEEL_SWITCH_SLOT

// Заблокировать авто-перезарядку и сброс зума, когда закончились
// патроны.
#define NO_AUTO_RELOAD_WPN

// включает хранилище скриптовых переменных в сейвы
#define SCRIPT_VARS_STORAGE

// включает экспорт функции setup_game_icon в Lua
#define SCRIPT_ICONS_CONTROL

// Выключает использование анимации рассматривания болта, подкидывания гранат
// и кручения ножа, т.е. anim_playing.
#define STOP_ANIM_PLAYING

// При проблемах в скриптовых биндерах будем падать, а не просто
// ругаться в лог.
//#define CRASH_ON_SCRIPT_BINDER_ERRORS

// Включает коллизию с трупами. Это значит, что мобы будут тупить,
// уперевшись в тушку мутантами, т.к. не умеют обходить препятствия.
#define CORPSES_COLLISION

// Скрывать оружие при открытом диалоге, инвентаре и т.п.
//#define MORE_HIDE_WEAPON

// Включает загрузку скриптов из подкаталогов scripts.
//#define LOAD_SCRIPTS_SUBDIRS

// включает экспорт класса CEffectorZoomInertion для управления движением
// прицела
#define SCRIPT_EZI_CONTROL

// Вычисление и использование правильного положения солнца, вместо позиции из
// погодных конфигов.
#define DYNAMIC_SUN_MOVEMENT

// Выключить музыкальный эмбиент по умолчанию. Можно включить командой
// "g_music_tracks on".
#define G_MUSIC_TRACKS_OFF

// Добавляет небольшую задержку между рендерингом кадров, чтобы зря не
// насиловать видеокарту при больших FPS.
#define ECO_RENDER

// Запрещает заряжать в дробовики патроны разного типа
#define SHOTG_EXTRA_AMMO_FIX

// Red Virus: bobbing effect from lost alpha
//#define WPN_BOBBING

// Очистка списка задач при загрузке сейва от выполненных и проваленных
//#define KEEP_INPROGRESS_TASKS_ONLY

// Сколько последних сообщений показывать в истории ПДА
#define NEWS_TO_SHOW 500

// Показывать полоску состояния предметов в инвентаре, на его
// иконке. Включает поддержку аттрибута condition_progress_bar для
// dragdrop элементов и статиков condition_progess_bar и
// cell_item_text.
//#define SHOW_INV_ITEM_CONDITION

// Показывать порядковый номер перед фразами в диалогах. Для этой
// опции необходимо изменить talk.xml и добавить туда статик
// "num_text" в "question_item", как это сделано в ЗП. Порядковые
// номера соответствуют акселлераторам, назначенным этим фразам. Этот
// дефайн нужен только для отображения номеров. Акселлераторы работают
// без этого дефайна.
//#define SHOW_DIALOG_NUMBERS

// Трупы будут игнорировать коллизии со всеми динамическими
// объектами. Насколько я понимаю, по умолчанию трупы игноруруют
// коллизии только с живыми мобами. С этим дефайном гора трупов не
// будет лагать.
//#define CORPSES_IGNORE_DYNAMIC

// эффект Доплера для звука из xp-dev
//#define SND_DOPPLER_EFFECT

// Радиоактивные предметы в инвентаре будут увеличивать радиацию. Тоже самое
// касается предметов, которые ухудшают пси-здоровье, если определен
// AF_PSY_HEALTH.
//#define OBJECTS_RADIOACTIVE

// Артефакты с нулевым состоянием работать не будут.
//#define AF_ZERO_CONDITION

// Влияение артефактов на сытость будет работать.
//#define AF_SATIETY

// У артефактов будет свойство восстановления пси-здоровья.
//#define AF_PSY_HEALTH

// Обрабатывать свойства артефактов для брони. Имеются ввиду всякие
// _restore_speed.
//#define OUTFIT_AF

// Включает увеличение параметра snd_targets по мере необходимости,
// когда нужно будет проиграть звук, а сейчас уже проигрываются
// snd_targets звуков. По умолчанию, в этом случае, один из звуков
// выключается, тот, у которого наименьший приоритет.
#define DYNAMIC_SND_TARGETS

// Отключает возможность смены уровня сложности. Будет единственный уровень
// сложности, тот, который стоит по умолчанию, т.е. мастер.
//#define GD_MASTER_ONLY

// KRodin: Для x64 использовать новый стектрейс коллектор, т.к. старый на x64 выдаёт обрезанный стек вызовов.
// А новый некорректно работает на x86, такие дела. Пока мне не удалось это исправить.
#ifndef _M_X64
#	define XR_USE_BLACKBOX
#endif

//Режим огня у оружия будет сохраняться при сейв-лоаде.
//#define SAVE_WEAPON_FIRE_MODE
