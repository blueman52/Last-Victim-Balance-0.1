(define "generic_h"
    {charge %c}
    {tags "%t"}
    {group "%g"}
    {button "%b"}
)

(define "generic_v"
    {charge %c}
    {tags "%t"}
    {group "%g"}
    {button "%b"}
    {cw %cw}
    {cp %cp}
)

;=======================================================

; 1 техника с 2 видами танкистов
(define "v"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "* ( mp/%s/tankman:%n1 mp/%s/tanker_01:%n2)"}
)

; 1 техника с 1 видом сопровождения (танкистов)
(define "v_s"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1 mp/%s/%n1"}
)

;===========================Пехота============================

; 1 тип пехоты
(define "i1"
    ("generic_h" c(%c) t(%t %s) g(%g) b(%b))
    {content "mp/%s/%n1"}
)

; 2 типа пехоты
(define "i2"
    ("generic_h" c(%c) t(%t %s) g(%g) b(%b))
    {content "mp/%s/%n1 mp/%s/%n2"}
)

; 3 типа пехоты
(define "i3"
    ("generic_h" c(%c) t(%t %s) g(%g) b(%b))
    {content "mp/%s/%n1 mp/%s/%n2 mp/%s/%n3"}
)

;===========================Техника============================

; 1 техника - 0 типов пехоты (танкистов)
(define "v_1_i_0"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1"}
)

; 1 техника - 1 тип пехоты (танкистов)
(define "v_1_i_1"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1 ( mp/%s/%n1 )"}
)

; 1 техника - 2 типа пехоты (танкистов)
(define "v_1_i_2"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1 ( mp/%s/%n1 mp/%s/%n2 )"}
)

; 1 техника - 3 типа пехоты (танкистов)
(define "v_1_i_3"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1 ( mp/%s/%n1 mp/%s/%n2 mp/%s/%n3 )"}
)

; 1 техника - 4 типа пехоты (танкистов)
(define "v_1_i_4"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1 ( mp/%s/%n1 mp/%s/%n2 mp/%s/%n3 mp/%s/%n4 )"}
)

; 2 типа техники - по 0 типов пехоты (танкистов)
(define "v_2_i_0"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1 %c2 "}
)

; 2 типа техники - по 1 типу пехоты (танкистов)
(define "v_2_i_1"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1 ( mp/%s/%n1 ) %c2 ( mp/%s/%n2 )"}
)

; 2 типа техники - по 2 типа пехоты (танкистов)
(define "v_2_i_2"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1 ( mp/%s/%n1 mp/%s/%n2 ) %c2 ( mp/%s/%n1 mp/%s/%n2 )"}
)

; 2 типа техники - по 3 типа пехоты (танкистов)
(define "v_2_i_3"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1 ( mp/%s/%n1 mp/%s/%n2 mp/%s/%n3 ) %c2 ( mp/%s/%n1 mp/%s/%n2 mp/%s/%n3 )"}
)

; 2 типа техники - по 4 типа пехоты (танкистов)
(define "v_2_i_4"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1 ( mp/%s/%n1 mp/%s/%n2 mp/%s/%n3 mp/%s/%n4 ) %c2 ( mp/%s/%n1 mp/%s/%n2 mp/%s/%n3 mp/%s/%n4 )"}
)

; 3 типа техники  - 0 типов пехоты (танкистов)
(define "v_3_i_0"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1 %c2 %c3"}
)

; 3 типа техники - 1 типов пехоты (танкистов)
(define "v_3_i_1"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1 ( mp/%s/%n1 ) %c2 ( mp/%s/%n1 ) %c3 ( mp/%s/%n1 )"}
)

; 3 типа техники - 2 типов пехоты (танкистов)
(define "v_3_i_2"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1 ( mp/%s/%n1 mp/%s/%n2 ) %c2 ( mp/%s/%n1 mp/%s/%n2 ) %c3 ( mp/%s/%n1 mp/%s/%n2 )"}
)

; 3 типа техники - 3 типов пехоты (танкистов)
(define "v_3_i_3"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1 ( mp/%s/%n1 mp/%s/%n2 mp/%s/%n3 ) %c2 ( mp/%s/%n1 mp/%s/%n2 mp/%s/%n3 ) %c3 ( mp/%s/%n1 mp/%s/%n2 mp/%s/%n3 )"}
)

; 3 типа техники - 4 типов пехоты (танкистов)
(define "v_3_i_4"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1 ( mp/%s/%n1 mp/%s/%n2 mp/%s/%n3 mp/%s/%n4 ) %c2 ( mp/%s/%n1 mp/%s/%n2 mp/%s/%n3 mp/%s/%n4 ) %c3 ( mp/%s/%n1 mp/%s/%n2 mp/%s/%n3 mp/%s/%n4 )"}
)

; 4 типов техники  - 0 типов пехоты (танкистов)
(define "v_4_i_0"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1 %c2 %c3 %c4"}
)

; 5 типов техники  - 0 типов пехоты (танкистов)
(define "v_5_i_0"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1 %c2 %c3 %c4 %c5"}
)

; 10 типа техники  - 0 типов пехоты (танкистов)
(define "v_10_i_0"
    ("generic_v" c(%c) sc(%sc) t(%t %s) g(%g) b(%b) cw(%cw) cp(%cp))
    {content "%c1 %c2 %c3 %c4 %c5 %c6 %c7 %c8 %c9 %c10"}
)

;===	=== Fauna ===	===

(define "generic_f"
    {charge %c}
    {group "%g"}
    {button "%b"}
    {tags "%t"}
)

(define "generic_f_nb"
    {cw %cw}
    {cp %cp}
    {score %sc}
)

; Параметры юнита
(define "ID"
    {charge %c}
    {group "%g"}
    {button "%b"}
    {cp %cp}
	{tags "%t"}
    {content "%c1"}
)

; 1 типа фауны
(define "f_1"
    ("generic_f" c(%c) t(%t %s) g(%g) b(%b))
    {content "%c1"}
)

; 2 типа фауны
(define "f_2"
    ("generic_f" c(%c) t(%t %s) g(%g) b(%b))
    {content "%c1 %c2"}
)

; 3 типа фауны
(define "f_3"
    ("generic_f" c(%c) t(%t %s) g(%g) b(%b))
    {content "%c1 %c2 %c3"}
)

; 4 типа фауны
(define "f_4"
    ("generic_f" c(%c) t(%t %s) g(%g) b(%b))
    {content "%c1 %c2 %c3 %c4"}
)

; 5 типа фауны
(define "f_5"
    ("generic_f" c(%c) t(%t %s) g(%g) b(%b))
    {content "%c1 %c2 %c3 %c4 %c5"}
)
(define "f_10"
    ("generic_f" c(%c) t(%t %s) g(%g) b(%b))
    {content "%c1 %c2 %c3 %c4 %c5 %c6 %c7 %c8 %c9 %c10"}
)

(define "f_3x2"
    ("generic_f" c(%c) t(%t %s) g(%g) b(%b))
    {content "%c1 %c2 %c3 %c1 %c2 %c3"}
)

(define "f_5x2"
    ("generic_f" c(%c) t(%t %s) g(%g) b(%b))
    {content "%c1 %c2 %c3 %c4 %c5 %c1 %c2 %c3 %c4 %c5"}
)
;===	xxx Fauna xxx	===


;===	=== generic_x ===	===
; extra unit
(define "extra"
    ("generic_x" sc(%sc) t(%t %s) cw(%cw) cp(%cp))
)
;===	xxx generic_x xxx	===

;===	=== Squads ===	=== 
(define "squad_with1types" ; 1 тип пехоты
	{"%name(%side)"
		{charge %c}
		{content "mp/%side/%c1"}
		{tags "frontline_cp infantry %side all inf_only %t"}
		{group "%g"}
		{button "%b"}
		{level %level}
		{cost %cost}
		{fore %f}
	}
)
(define "squad_with1types_vehicle" ; 1 тип пехоты в технике
	{"%name(%side)"
		{charge %c}
		{content "%v1 ( mp/%side/%c1 )"}
		{tags "frontline_cp infantry %side all inf_only %t"}
		{group "%g"}
		{button "%b"}
		{level %level}
		{cost %cost}
		{fore %f}
	}
)

(define "squad_with2types"
	{"%name(%side)"
		{charge %c}
		{content "mp/%side/%c1 mp/%side/%c2"}
		{tags "frontline_cp infantry %side all inf_only %t"}
		{group "%g"}
		{button "%b"}
		{level %level}
		{cost %cost}
		{fore %f}
	}
)
(define "squad_with2types_vehicle"
	{"%name(%side)"
		{charge %c}
		{content "%v1 ( mp/%side/%c1 mp/%side/%c2 )"}
		{tags "frontline_cp infantry %side all inf_only %t"}
		{group "%g"}
		{button "%b"}
		{level %level}
		{cost %cost}
		{fore %f}
	}
)

(define "squad_with3types"
	{"%name(%side)"
		{charge %c}
		{content "mp/%side/%c1 mp/%side/%c2 mp/%side/%c3"}
		{tags "frontline_cp infantry %side all inf_only %t"}
		{group "%g"}
		{button "%b"}
		{level %level}
		{cost %cost}
		{fore %f}
	}
)
(define "squad_with3types_vehicle"
	{"%name(%side)"
		{charge %c}
		{content "%v1 ( mp/%side/%c1 mp/%side/%c2 mp/%side/%c3 )"}
		{tags "frontline_cp infantry %side all inf_only %t"}
		{group "%g"}
		{button "%b"}
		{level %level}
		{cost %cost}
		{fore %f}
	}
)

(define "squad_with4types"
	{"%name(%side)"
		{charge %c}
		{content "mp/%side/%c1 mp/%side/%c2 mp/%side/%c3 mp/%side/%c4"}
		{tags "frontline_cp infantry %side all inf_only %t"}
		{group "%g"}
		{button "%b"}
		{level %level}
		{cost %cost}
		{fore %f}
	}
)
(define "squad_with4types_vehicle"
	{"%name(%side)"
		{charge %c}
		{content "%v1 ( mp/%side/%c1 mp/%side/%c2 mp/%side/%c3 mp/%side/%c4 )"}
		{tags "frontline_cp infantry %side all inf_only %t"}
		{group "%g"}
		{button "%b"}
		{level %level}
		{cost %cost}
		{fore %f}
	}
)

(define "squad_with5types"
	{"%name(%side)"
		{charge %c}
		{content "mp/%side/%c1 mp/%side/%c2 mp/%side/%c3 mp/%side/%c4 mp/%side/%c5"}
		{tags "frontline_cp infantry %side all inf_only %t"}
		{group "%g"}
		{button "%b"}
		{level %level}
		{cost %cost}
		{fore %f}
	}
)
(define "squad_with5types_vehicle"
	{"%name(%side)"
		{charge %c}
		{content "%v1 ( mp/%side/%c1 mp/%side/%c2 mp/%side/%c3 mp/%side/%c4 mp/%side/%c5 )"}
		{tags "frontline_cp infantry %side all inf_only %t"}
		{group "%g"}
		{button "%b"}
		{level %level}
		{cost %cost}
		{fore %f}
	}
)

(define "squad_with6types"
	{"%name(%side)"
		{charge %c}
		{content "mp/%side/%c1 mp/%side/%c2 mp/%side/%c3 mp/%side/%c4 mp/%side/%c5 mp/%side/%c6"}
		{tags "frontline_cp infantry %side all inf_only %t"}
		{group "%g"}
		{button "%b"}
		{level %level}
		{cost %cost}
		{fore %f}
	}
)
(define "squad_with6types_vehicle"
	{"%name(%side)"
		{charge %c}
		{content "%v1 ( mp/%side/%c1 mp/%side/%c2 mp/%side/%c3 mp/%side/%c4 mp/%side/%c5 mp/%side/%c6 )"}
		{tags "frontline_cp infantry %side all inf_only %t"}
		{group "%g"}
		{button "%b"}
		{level %level}
		{cost %cost}
		{fore %f}
	}
)
(define "squad_with7types"
	{"%name(%side)"
		{charge %c}
		{content "mp/%side/%c1 mp/%side/%c2 mp/%side/%c3 mp/%side/%c4 mp/%side/%c5 mp/%side/%c6 mp/%side/%c7"}
		{tags "frontline_cp infantry %side all inf_only %t"}
		{group "%g"}
		{button "%b"}
		{level %level}
		{cost %cost}
		{fore %f}
	}
)
(define "squad_with8types"
	{"%name(%side)"
		{charge %c}
		{content "mp/%side/%c1 mp/%side/%c2 mp/%side/%c3 mp/%side/%c4 mp/%side/%c5 mp/%side/%c6 mp/%side/%c7 mp/%side/%c8"}
		{tags "frontline_cp infantry %side all inf_only %t"}
		{group "%g"}
		{button "%b"}
		{level %level}
		{cost %cost}
		{fore %f}
	}
)
(define "squad_with10types"
	{"%name(%side)"
		{charge %c}
		{content "mp/%side/%c1 mp/%side/%c2 mp/%side/%c3 mp/%side/%c4 mp/%side/%c5 mp/%side/%c6 mp/%side/%c7 mp/%side/%c8 mp/%side/%c9 mp/%side/%c10"}
		{tags "frontline_cp infantry %side all inf_only %t"}
		{group "%g"}
		{button "%b"}
		{level %level}
		{cost %cost}
		{fore %f}
	}
)


