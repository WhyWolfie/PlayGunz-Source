#include "stdafx.h"
#include "ZMap.h"
#include "ZApplication.h"
#include "MComboBox.h"
#include "ZChannelRule.h"

#include "ZGameClient.h"

void ZGetCurrMapPath(char* outPath)
{
	// ���߿� ������ �����Ҷ����� �׳� �� �ϳ��� ���
#ifdef _QUEST


	if (ZGetGameTypeManager()->IsQuestDerived(ZGetGameClient()->GetMatchStageSetting()->GetGameType()))
	{
		strcpy(outPath, PATH_QUEST_MAPS);
		return;
	}
#endif

	if (ZApplication::GetInstance()->GetLaunchMode() == ZApplication::ZLAUNCH_MODE_STANDALONE_QUEST)
	{
		strcpy(outPath, PATH_QUEST_MAPS);
	}
	else
	{
		strcpy(outPath, PATH_GAME_MAPS);
	}
}

bool InitMaps(MWidget *pWidget)
{
	if(!pWidget) return false;

	MComboBox* pCombo=(MComboBox*)pWidget;
	pCombo->RemoveAll();

	// ����Ʈ ���� scenario.xml�� ����� �ʵ鸸 �о���δ�.
	if ((ZGetGameClient()) && ( ZGetGameTypeManager()->IsQuestDerived(ZGetGameClient()->GetMatchStageSetting()->GetGameType())))
	{
		LIST_SCENARIONAME* pSenarioDesc = ZApplication::GetStageInterface()->GetSenarioDesc();

		// �Ϲ� �ó������� �о�´�. 1000������ ����
		for ( int i = 1000;  ; i++)
		{
			LIST_SCENARIONAME::iterator itr = pSenarioDesc->find( i);


			// ���̸� ����
			if ( itr == pSenarioDesc->end())
				return true;


			// ������ �޺� �ڽ��� �̹� �����ϴ��� �˻�.
			MSenarioList Scenario = (*itr).second;
			bool bFind = false;

			for ( int k = 0;  k < pCombo->GetCount();  k++)
			{
				if ( !strcmp( Scenario.m_szMapSet, pCombo->GetString( k)))
				{
					bFind = true;
					break;
				}
			}

			// �޺� �ڽ��� ������ �޺� �ڽ��� �߰�.
			if ( !bFind)
				pCombo->Add( Scenario.m_szMapSet);

		}

		return true;
	}

	MChannelRule* pRule = ZGetChannelRuleMgr()->GetCurrentRule();
	if (pRule == NULL) {
		mlog("Init maps : no Current ChannelRule \n");
		return false;
	}

	MZFileSystem *pFS=ZApplication::GetFileSystem();
#define MAP_EXT	".rs"
	bool bRelayMapInsert = false;
	int nExtLen = (int)strlen(MAP_EXT);
	for(int i=0; i<pFS->GetFileCount(); i++)
	{
		const char* szFileName = pFS->GetFileName(i);
		const MZFILEDESC* desc = pFS->GetFileDesc(i);
		int nLen = (int)strlen(szFileName);

		char MAPDIRECTORY[64];
		ZGetCurrMapPath(MAPDIRECTORY);

		if( strnicmp(desc->m_szFileName,MAPDIRECTORY,strlen(MAPDIRECTORY))==0 && nLen>nExtLen && stricmp(szFileName+nLen-nExtLen, MAP_EXT)==0 )
		{
			char drive[_MAX_DRIVE],dir[_MAX_DIR],fname[_MAX_FNAME],ext[_MAX_EXT];
			_splitpath(szFileName,drive,dir,fname,ext);

			bool bDuelMode = false;
			if ( ZGetGameClient() && (ZGetGameClient()->GetMatchStageSetting()->GetGameType() == MMATCH_GAMETYPE_DUEL))
				bDuelMode = true;

			if(!bDuelMode)
			{
				if(strstr(fname, "Hall"))
					continue;
				if(strstr(fname, "Shower Room"))
					continue;		
				if(strstr(fname, "Jail"))
					continue;
				if(strstr(fname, "Catacomb"))
					continue;
			}
			if ( ZGetGameClient() && (ZGetGameClient()->GetMatchStageSetting()->GetGameType() == MMATCH_GAMETYPE_CTF))
			{
				if(strstr(fname, "Mansion"))
				{
					pCombo->Add(fname);
					continue;
				}
				if(strstr(fname, "Castle"))
				{
					pCombo->Add(fname);
					continue;
				}
				if(strstr(fname, "Town"))
				{
					pCombo->Add(fname);
					continue;
				}
				if(strstr(fname, "Ruin"))
				{
					pCombo->Add(fname);
					continue;
				}
				if(strstr(fname, "Island"))
				{
					pCombo->Add(fname);
					continue;
				}
				if(strstr(fname, "Garden"))
				{
					pCombo->Add(fname);
					continue;
				}
				if(strstr(fname, "Stairway"))
				{
					pCombo->Add(fname);
					continue;
				}
				if(strstr(fname, "Station"))
				{
					pCombo->Add(fname);
					continue;
				}
				if(strstr(fname, "Port"))
				{
					pCombo->Add(fname);
					continue;
				}
				if(strstr(fname, "High_Haven"))
				{
					pCombo->Add(fname);
					continue;
				}
				if(strstr(fname, "WeaponShop"))
				{
					pCombo->Add(fname);
					continue;
				}
				if(strstr(fname, "Prison"))
				{
					pCombo->Add(fname);
					continue;
				}
				if(strstr(fname, "Prison II"))
				{
					pCombo->Add(fname);
					continue;
				}
				if(strstr(fname, "Factory"))
				{
					pCombo->Add(fname);
					continue;
				}

			}
			else
				pCombo->Add(fname);
		}
	}

	//	bool bRelayMapInsert = false;
	//	int nMapCount = MGetMapDescMgr()->GetMapCount();
	//	for( int i=0 ; i< nMapCount ; i++)
	//	{
	//
	////#ifdef _DEBUG	// ����׽� ���� ������
	////		pCombo->Add(MGetMapDescMgr()->GetMapName(i));
	////		continue;
	////#endif
	//
	//		bool bDuelMode = false;
	//		bool bCTFMode = false;
	//		if ( ZGetGameClient() && (ZGetGameClient()->GetMatchStageSetting()->GetGameType() == MMATCH_GAMETYPE_DUEL))
	//			bDuelMode = true;
	//		if ( ZGetGameClient() && (ZGetGameClient()->GetMatchStageSetting()->GetGameType() == MMATCH_GAMETYPE_CTF))
	//			bCTFMode = true;
	//
	//		bool UseThisMap = true;
	//		// �����̸��� ������ �־��ش�.
	//		if(!bRelayMapInsert)
	//		{
	//			for(int j=0 ; j< MGetMapDescMgr()->GetMapCount() ; j++)
	//			{
	//				if(strcmp(MMATCH_MAPNAME_RELAYMAP, MGetMapDescMgr()->GetMapName(j)) == 0)
	//				{
	//					pCombo->Add(MGetMapDescMgr()->GetMapName(j));
	//					bRelayMapInsert = true;
	//					//--nMapCount;	// �����̸��� �߰������� MapCount�� �ٿ��ش�.
	//					continue;
	//				}
	//			}
	//		}
	//
	//		if(bCTFMode) 
	//		{
	//			if ( pRule->CheckCTFMap( MGetMapDescMgr()->GetMapName(i)))
	//			{
	//				if(strcmp(MMATCH_MAPNAME_RELAYMAP, MGetMapDescMgr()->GetMapName(i)) != 0)
	//					pCombo->Add(MGetMapDescMgr()->GetMapName(i));
	//			}
	//		}
	//
	//		if ( pRule->CheckMap( MGetMapDescMgr()->GetMapName(i), bDuelMode) && !bCTFMode)
	//			if(strcmp(MMATCH_MAPNAME_RELAYMAP, MGetMapDescMgr()->GetMapName(i)) != 0)
	//				pCombo->Add(MGetMapDescMgr()->GetMapName(i));
	//	}
	//
	return true;
}
