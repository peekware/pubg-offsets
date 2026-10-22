// peekware dump game version = 2610.1.1.71

namespace Offset
{
    constexpr uint64_t XenuineDecrypt = 0x117B7628;
    constexpr uint64_t UWorld = 0x133F77E8;
    constexpr uint64_t PhysxSDK = 0x12DCD8C8;
    constexpr uint64_t GNames = 0x1369CD40;
    constexpr uint64_t GNamesPtr = 0x8;
    constexpr uint64_t ChunkSize = 0x4010;

    constexpr uint64_t DecryptNameIndexRor = 0x1;
    constexpr uint64_t DecryptNameIndexXorKey1 = 0x46BAE3B9;
    constexpr uint64_t DecryptNameIndexXorKey2 = 0x54D51E55;
    constexpr uint64_t DecryptNameIndexXorKey3 = 0x0;
    constexpr uint64_t DecryptNameIndexRval = 0x5;
    constexpr uint64_t DecryptNameIndexSval = 0x0;
    constexpr uint64_t DecryptNameIndexDval = 0xB;
    constexpr uint64_t DecryptNameIndexShlMask = 0xFFFF0000;

    constexpr uint64_t ObjID = 0x10;

    constexpr uint64_t GameInstance = 0x860;
    constexpr uint64_t LocalPlayer = 0x30;
    constexpr uint64_t Actors = 0x210;
    constexpr uint64_t NumAliveTeams = 0x544;

    constexpr uint64_t ComponentToWorld = 0x220;
    constexpr uint64_t ComponentLocation = 0x230;
    constexpr uint64_t ComponentVelocity = 0x25C;
    constexpr uint64_t TimeSeconds = 0x9C0;
    constexpr uint64_t DeltaTimeSeconds = 0x2DC;
    constexpr uint64_t CurrentLevel = 0x828;

    constexpr uint64_t Mesh = 0x788;
    constexpr uint64_t Gender = 0xB38;
    constexpr uint64_t CharacterMovement = 0x7A0;
    constexpr uint64_t LastUpdateVelocity = 0x3D0;
    constexpr uint64_t RootComponent = 0x320;

    constexpr uint64_t PlayerController = 0x30;
    constexpr uint64_t PlayerInput = 0x548;
    constexpr uint64_t InputYawScale = 0x64C;
    constexpr uint64_t bShowMouseCursor = 0x658;
    constexpr uint64_t AcknowledgedPawn = 0x4A8;
    constexpr uint64_t MyHUD = 0x4C8;
    constexpr uint64_t InputAxisProperties = 0x130;

    constexpr uint64_t GameState = 0x3E0;
    constexpr uint64_t bAlwaysCreatePhysicsState = 0x488;
    constexpr uint64_t MouseX = 0x5369;
    constexpr uint64_t MouseY = 0x536A;

    constexpr uint64_t WorldOrigin = 0x38;
    constexpr uint64_t WorldOriginLocation = 0x240;

    constexpr uint64_t SafetyZoneRadius = 0xAC;
    constexpr uint64_t SafetyZonePosition = 0xA0;
    constexpr uint64_t BlueZoneRadius = 0xBC;
    constexpr uint64_t BlueZonePosition = 0xB0;

    constexpr uint64_t PlayerArray = 0x410;
    constexpr uint64_t PlayerCameraManager = 0x4D0;
    constexpr uint64_t ViewTarget = 0x410;
    constexpr uint64_t CameraCacheFOV = 0x9DC;
    constexpr uint64_t CameraCacheRotation = 0x9C0;
    constexpr uint64_t CameraCacheLocation = 0x9CC;

    constexpr uint64_t GroggyHealth = 0x1850;
    constexpr uint64_t CharacterName = 0x1E60;
    constexpr uint64_t LastTeamNum = 0x1148;
    constexpr uint64_t SpectatedCount = 0x11B4;
    constexpr uint64_t PlayerState = 0x438;
    constexpr uint64_t CharacterState = 0x14A8;
    constexpr uint64_t AnimScriptInstance = 0xE20;
    constexpr uint64_t SubInstances = 0xE28;
    constexpr uint64_t PreEvalPawnState = 0x650;
    constexpr uint64_t StaticMesh = 0xAD8;
    constexpr uint64_t LastSubmitTime = 0x748;
    constexpr uint64_t Eyes = 0x750;
    constexpr uint64_t AimOffsets = 0x1B50;

    constexpr uint64_t PlayerStatistics = 0x4C8;
    constexpr uint64_t DamageDealtOnEnemy = 0x718;
    constexpr uint64_t PartnerLevel = 0x704;
    constexpr uint64_t TeamNumber = 0x55C;
    constexpr uint64_t PlayerName = 0x460;
    constexpr uint64_t PlayerStatusType = 0x408;
    constexpr uint64_t SquadMemberIndex = 0x504;
    constexpr uint64_t AccountId = 0x560;
    constexpr uint64_t SurvivalTier = 0xE50;
    constexpr uint64_t SurvivalLevel = 0xE54;
    constexpr uint64_t PubgIdData = 0xE30;
    constexpr uint64_t CharacterClanInfo = 0x950;
    constexpr uint64_t ReplicatedMovement = 0x60;

    constexpr uint64_t VehicleRiderComponent = 0x2060;
    constexpr uint64_t SeatIndex = 0x228;
    constexpr uint64_t LastVehiclePawn = 0x260;
    constexpr uint64_t VehicleMovement = 0x470;
    constexpr uint64_t Wheels = 0x320;
    constexpr uint64_t WheelLocation = 0xF8;
    constexpr uint64_t DampingRate = 0x4C;
    constexpr uint64_t ShapeRadius = 0x40;

    constexpr uint64_t VehicleFuel = 0x2E8;
    constexpr uint64_t VehicleCommonComponent = 0xB40;
    constexpr uint64_t FloatingComponent = 0x500;
    constexpr uint64_t VehicleFuelMax = 0x2EC;
    constexpr uint64_t VehicleHealth = 0x2E0;
    constexpr uint64_t VehicleHealthMax = 0x2E4;

    constexpr uint64_t WidgetStateMap = 0x548;
    constexpr uint64_t TrainingMapGrid = 0x608;
    constexpr uint64_t MapGrid_Map = 0x4B8;
    constexpr uint64_t LayoutData = 0x38;
    constexpr uint64_t Visibility = 0xA1;
    constexpr uint64_t Slot = 0x30;
    constexpr uint64_t Offsets = 0x0;
    constexpr uint64_t Alignment = 0x20;
    constexpr uint64_t BlockInputWidgetList = 0x5C0;
    constexpr uint64_t SelectMinimapSizeIndex = 0x558;

    constexpr uint64_t InventoryFacade = 0x1170;
    constexpr uint64_t Inventory = 0x400;
    constexpr uint64_t InventoryItems = 0x690;
    constexpr uint64_t InventoryItemCount = 0x698;
    constexpr uint64_t InventoryItemTagItemCount = 0x38;

    constexpr uint64_t ItemID = 0x270;
    constexpr uint64_t ItemTable = 0xA8;
    constexpr uint64_t ItemPackageItems = 0x578;
    constexpr uint64_t DroppedItemGroup = 0x1A0;
    constexpr uint64_t DroppedItem = 0x470;
    constexpr uint64_t DroppedItemGroupUItem = 0x878;

    constexpr uint64_t TimeTillExplosion = 0x824;
    constexpr uint64_t ExplodeState = 0x638;

    constexpr uint64_t WeaponProcessor = 0x970;
    constexpr uint64_t CurrentAmmoData = 0xD00;
    constexpr uint64_t CurrentWeaponIndex = 0x309;
    constexpr uint64_t EquippedWeapons = 0x200;

    constexpr uint64_t WeaponTrajectoryData = 0x1230;
    constexpr uint64_t TrajectoryGravityZ = 0x1148;
    constexpr uint64_t RecoilValueVector = 0x11F8;
    constexpr uint64_t VerticalRecovery = 0x1140;
    constexpr uint64_t TrajectoryConfig = 0x100;

    constexpr uint64_t BallisticCurve = 0x28;
    constexpr uint64_t FloatCurves = 0x30;
    constexpr uint64_t Keys = 0x60;

    constexpr uint64_t WeaponConfig_WeaponClass = 0x521;
    constexpr uint64_t Mesh3P = 0x800;
    constexpr uint64_t FiringAttachPoint = 0x8C0;
    constexpr uint64_t AttachedStaticComponentMap = 0x1508;
    constexpr uint64_t AttachedItems = 0x858;
    constexpr uint64_t WeaponAttachmentData = 0x290;
    constexpr uint64_t ScopingAttachPoint = 0xCA8;
    constexpr uint64_t ElapsedCookingTime = 0xB80;

    constexpr uint64_t ControlRotation_CP = 0x66C;
    constexpr uint64_t RecoilADSRotation_CP = 0x814;
    constexpr uint64_t LeanLeftAlpha_CP = 0x6B4;
    constexpr uint64_t LeanRightAlpha_CP = 0x6B8;
    constexpr uint64_t bIsScoping_CP = 0x855;
    constexpr uint64_t bIsReloading_CP = 0x755;

    constexpr uint64_t StaticSockets = 0xC0;
    constexpr uint64_t StaticSocketName = 0x28;
    constexpr uint64_t StaticRelativeLocation = 0x30;
    constexpr uint64_t StaticRelativeRotation = 0x3C;
    constexpr uint64_t StaticRelativeScale = 0x48;

    constexpr uint64_t AntiCheatCharacterSyncManager = 0xDC8;

    constexpr uint64_t HeaFlag = 0xE8;
    constexpr uint64_t Health1 = 0x95C;
    constexpr uint64_t Health2 = 0xA08;
    constexpr uint64_t Health3 = 0xA24;
    constexpr uint64_t Health4 = 0xA10;
    constexpr uint64_t Health5 = 0xA25;
    constexpr uint64_t Health6 = 0xA20;
    constexpr uint64_t HealthBlock = 0xA10;
    constexpr uint64_t HealthBlockKeyIndex = 0xA20;
    constexpr uint64_t HealthBlockIndex = 0xA24;
    constexpr uint64_t bHealthBlockEncrypted = 0xA25;

    constexpr uint64_t DBNOHealthBlock = 0x3590;
    constexpr uint64_t DBNOHealthBlockKeyIndex = 0x35A0;
    constexpr uint64_t DBNOHealthBlockIndex = 0x35A4;
    constexpr uint64_t bDBNOHealthBlockEncrypted = 0x35A5;

    constexpr uint64_t EncryptedHealth = 0x3580;
    constexpr uint64_t EncryptedDBNOHealth = 0x35B0;

    constexpr uint64_t Health_keys0 = 0xCEC7A58D;
    constexpr uint64_t Health_keys1 = 0x9B63B22E;
    constexpr uint64_t Health_keys2 = 0xCAD74AA5;
    constexpr uint64_t Health_keys3 = 0x2E38484F;
    constexpr uint64_t Health_keys4 = 0xC8911D0A;
    constexpr uint64_t Health_keys5 = 0x23DDBF0C;
    constexpr uint64_t Health_keys6 = 0x9454FC8;
    constexpr uint64_t Health_keys7 = 0xA521A421;
    constexpr uint64_t Health_keys8 = 0xBBF7A58;
    constexpr uint64_t Health_keys9 = 0xB0EF2E87;
    constexpr uint64_t Health_keys10 = 0xE2753BA4;
    constexpr uint64_t Health_keys11 = 0x878ADBD4;
    constexpr uint64_t Health_keys12 = 0xBDC8EBD5;
    constexpr uint64_t Health_keys13 = 0x2E934F07;
    constexpr uint64_t Health_keys14 = 0x4F099E38;
    constexpr uint64_t Health_keys15 = 0xF0C52AF4;

    constexpr uint64_t FiringModeIndex = 0xC74;
    constexpr uint64_t FireModes = 0xB60;
    constexpr uint64_t PlayerStateKilled = 0x570;

    constexpr uint64_t bIsDBNO_CP = 0x8E2;
    constexpr uint64_t bIsDBNO1 = 0x3578;
    constexpr uint64_t bIsDBNO2 = 0x3579;
    constexpr uint64_t bIsDBNO0 = 0x357A;

    constexpr uint64_t MortarElevation = 0x518;
    constexpr uint64_t MortarYaw = 0x51C;
    constexpr uint64_t MortarShellMovement = 0x450;
    constexpr uint64_t ProjectileInitialSpeed = 0x240;
    constexpr uint64_t ProjectileGravityScale = 0x25C;
    constexpr uint64_t ProjectileVelocity = 0x20C;

    constexpr uint64_t LastTakeHitInfo = 0x19D0;
    constexpr uint64_t Equipment = 0x418;
    constexpr uint64_t EquipmentItems = 0x568;
    constexpr uint64_t Durability = 0x1D4;
    constexpr uint64_t StackCount = 0x38;
}
