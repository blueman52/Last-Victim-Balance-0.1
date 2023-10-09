; == STANDARD ==
(define "test_all"
	{common
		{unitset
			{value "all"}
		}
		{commandPoints "*=%cp"}
		(include "unitLimits.inc")
		{balancingFactorBonus {cp 1.0} {mp 1.0} }
		{chargeFactors
			{value "*=0"}
		}
		{budgets
			{vehicle
				{mode "standard"}
				{resource 
					{start 		%start}
					{finish 	%finish}
					{growTime	1500}		; in seconds
					{growTable 	"0.65 0.65 0.65 0.70 0.70 0.70 0.75 0.75 0.75 0.80 0.80 0.80 0.80 0.80 0.80 0.85 0.85 0.85 0.90 0.90 0.90 0.90 0.90 0.90 1.00"}
					{payback
						{cp 		"0		25		50 		60		70		80		90"}
						{restore 	"3.0	2.5		1.5		1.0		0.8		0.6		0.4"}
					}
				} 
				{buttons "squad_p1 squad_p2 squad_sp1 squad_sp2 squad1 squad2 squad3 squad4 sent lr v1 v2 v3 v4 v5"}
			}
			{hero
				{resource 
					{start 		1000}
				} 
				{buttons "hero"}
				{tag "special"}
			}
		} 
	}
	{bots
		{easy
			{balancingFactorBonus {cp 0.10} {mp 0.05}  {payback 4}}
			{chargeFactors
				{value "*=0.25"}
			}
		}
		{normal
			{balancingFactorBonus {cp 0.11} {mp 0.08}  {payback 6}}
			{chargeFactors
				{value "*=0.2"}
			}
		}
		{hard
			{balancingFactorBonus {cp 0.12} {mp 0.10}  {payback 8}}
			{chargeFactors
				{value "*=0.2"}
			}
		}
		{heroic
			{balancingFactorBonus {cp 0.14} {mp 0.10}  {payback 16}}
			{chargeFactors
				{value "*=0.1"}
			}
		}
	}
)


;------------------------------------------------------------------------------------------------------------
{presets
	{"s:test_all"	
		{gameMode "test"}{apply "army_standard"}
		{unitMode "all"}
		{specMode "all_normal"}
		("test_all" 		start(50000) finish(50000) cp(1000))
	}
;------------------------------------------------------------------------------------------------------------
}