; == STANDARD ==
(define "standard_all"
	{common
		{unitset
			{value "all"}
		}
		{commandPoints "*=%cp"}
		(include "unitLimits.inc")
		{balancingFactorBonus {cp 1.0} {mp 1.0} }
		{chargeFactors
			{value "*=1"}
			
		}
		{budgets
			{vehicle
				{mode "standard"}
				{resource 
					{start 		%start}
					{finish 	%finish}
					{growTime	1800}		; in seconds
					{growTable 	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
					{payback
						{cp 		"0		25		50 		60		70		80		90"}
						{restore 	"3.0	2.5		1.5		1.0		0.8		0.6		0.4"}
					}
				} 
				{buttons "squad1 squad2 squad3 sent lr v1 v2 v3 v4 v5"}
			}
			{hero
				{resource 
					{start 		15}
				} 
				{buttons "hero"}
				{tag "special"}
			}
		}
	}
	{bots
		(include "bots_generic.inc")
	}
)


; == CUSTOM ==
(define "custom_all"
	{common
		{unitset
			{value "all"}
		}
		{commandPoints "*=%cp"}
		(include "unitLimits.inc")
		{balancingFactorBonus {cp 1.0} {mp 1.0} }
		{chargeFactors
			{value "*=1"}
			
		}
		{budgets
			{vehicle
				{mode "custom"}
				{resource 
					{start 		%start}
					{finish 	%finish}
					{growTime	1800}		; in seconds
					{growTable 	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
					{payback
						{cp 		"0		25		50 		60		70		80		90"}
						{restore 	"3.0	2.5		1.5		1.0		0.8		0.6		0.4"}
					}
					{limitmin	1000}
					{limitmax	50000}
					{speedset 	"2500 3000 3500 4000 4500 5000 8000 10000 20000 50000"}
				} 
				{buttons "squad1 squad2 squad3 sent lr v1 v2 v3 v4 v5"}
			}
			{hero
				{resource 
					{start 		15}
				} 
				{buttons "hero"}
				{tag "special"}
			}
		} 
	}
	{bots
		(include "bots_generic.inc")
	}
)


;------------------------------------------------------------------------------------------------------------
{presets
	{"s:standard_100_all"	
		{gameMode "standard"}{apply "army_standard"}
		{unitMode "all"}
		{specMode "all_normal"}
		("standard_all" 		start(160) finish(20000) cp(100))
	}
	{"s:standard_160_all"	
		{gameMode "standard"}{apply "army_standard"}
		{unitMode "all"}
		{specMode "all_high"}
		("standard_all" 		start(600) finish(6000) cp(125))
	}
	
;------------------------------------------------------------------------------------------------------------
	{"c:custom_50_all"
		{gameMode "custom"}{apply "army_standard"}
		{unitMode "all"}
		{specMode "cp_50"}
		("custom_all" 			start(160) finish(5200) cp(50))
	}
	{"c:custom_80_all"
		{gameMode "custom"}{apply "army_standard"}
		{unitMode "all"}
		{specMode "cp_80"}
		("custom_all" 			start(160) finish(5200) cp(80)) 
	}
	{"c:custom_100_all"
		{gameMode "custom"}{apply "army_standard"}
		{unitMode "all"}
		{specMode "cp_100"}
		("custom_all" 			start(160) finish(5200) cp(100))
	}
	{"c:custom_120_all"
		{gameMode "custom"}{apply "army_standard"}
		{unitMode "all"}
		{specMode "cp_120"}
		("custom_all"  			start(160) finish(5200) cp(120))
	}
	{"c:custom_140_all"
		{gameMode "custom"}{apply "army_standard"}
		{unitMode "all"}
		{specMode "cp_140"}
		("custom_all"  			start(160) finish(5200) cp(140))
	}
	{"c:custom_160_all"
		{gameMode "custom"}{apply "army_standard"}
		{unitMode "all"}
		{specMode "cp_160"}
		("custom_all"  			start(160) finish(5200) cp(160))
	}
;------------------------------------------------------------------------------------------------------------
}