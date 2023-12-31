// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

// add headers that you want to pre-compile here
#include "framework.h"

//Utils
#include "Utils/Base64.h"
#include "Utils/ChakraHelper.h"
#include "Utils/DllHelper.h"
#include "Utils/HMath.h"
#include "Utils/keys.h"
#include "Utils/Logger.h"
#include "Utils/SkinUtil.h"
#include "Utils/Target.h"
#include "Utils/TextFormat.h"
#include "Utils/TimerUtils.h"
#include "Utils/Utils.h"
#include "Utils/VoxelIntersector.h"
#include "Utils/xorstr.h"

//SDK
#include "SDK/CAttribute.h"
#include "SDK/CBlockLegacy.h"
#include "SDK/CCamera.h"
#include "SDK/CChestBlockActor.h"
#include "SDK/CClientInstance.h"
#include "SDK/CClientInstanceScreenModel.h"
#include "SDK/CComplexInventoryTransaction.h"
#include "SDK/CEntity.h"
#include "SDK/CEntityList.h"
#include "SDK/CGameMode.h"
#include "SDK/CGameSettingsInput.h"
#include "SDK/CHIDController.h"
#include "SDK/CImageBuffer.h"
#include "SDK/CInventory.h"
#include "SDK/CInventoryTransaction.h"
#include "SDK/CItem.h"
#include "SDK/CLoopbackPacketSender.h"
#include "SDK/CMinecraftUIRenderContext.h"
#include "SDK/CMoveInputHandler.h"
#include "SDK/CPacket.h"
#include "SDK/CRakNetInstance.h"
#include "SDK/CUIScene.h"
#include "SDK/Dimension.h"
#include "SDK/MatrixStack.h"
#include "SDK/MojangsonToken.h"
#include "SDK/Tag.h"
#include "SDK/Tessellator.h"
#include "SDK/TextHolder.h"

//Memory
#include "Memory/GameData.h"
#include "Memory/Hooks.h"
#include "Memory/MinHook.h"
#include "Memory/SlimMem.h"

//Render
#include "Kek.Club+/DrawUtils.h"
#include "Kek.Club+/GuiUtils.h"
#include "Kek.Club+/ImmediateGui.h"
#include "Kek.Club+/Loader.h"

//Commands
#include "Kek.Club+/Command/CommandMgr.h"
#include "Kek.Club+/Command/Commands/BindCommand.h"
#include "Kek.Club+/Command/Commands/CoordsCommand.h"
#include "Kek.Club+/Command/Commands/DupeCommand.h"
#include "Kek.Club+/Command/Commands/EjectCommand.h"
#include "Kek.Club+/Command/Commands/FriendListCommand.h"
#include "Kek.Club+/Command/Commands/GiveCommand.h"
#include "Kek.Club+/Command/Commands/HelpCommand.h"
#include "Kek.Club+/Command/Commands/HideCommand.h"
#include "Kek.Club+/Command/Commands/ICommand.h"
#include "Kek.Club+/Command/Commands/ModulesCommand.h"
#include "Kek.Club+/Command/Commands/NameSpoofCommand.h"
#include "Kek.Club+/Command/Commands/PanicCommand.h"
#include "Kek.Club+/Command/Commands/PathCommand.h"
#include "Kek.Club+/Command/Commands/SayCommand.h"
#include "Kek.Club+/Command/Commands/ServerCommand.h"
#include "Kek.Club+/Command/Commands/SetPrefixCommand.h"
#include "Kek.Club+/Command/Commands/SpammerCommand.h"
#include "Kek.Club+/Command/Commands/TeleportCommand.h"
#include "Kek.Club+/Command/Commands/ToggleCommand.h"
#include "Kek.Club+/Command/Commands/TopCommand.h"
#include "Kek.Club+/Command/Commands/UnbindCommand.h"
#include "Kek.Club+/Command/Commands/WaypointCommand.h"

//Misc
#include "Kek.Club+/Config/AccountInformation.h"
#include "Kek.Club+/Config/ConfigManager.h"
#include "Kek.Club+/FriendList/FriendList.h"
#include "Kek.Club+/Menu/ClickGui.h"
#include "Kek.Club+/Menu/TabGui.h"

//Path
#include "Kek.Club+/path/Path.h"
#include "Kek.Club+/path/PathConstants.h"
#include "Kek.Club+/path/PathFinder.h"
#include "Kek.Club+/path/PathMovementController.h"
#include "Kek.Club+/path/PathSegment.h"
#include "Kek.Club+/path/goals/PathGoal.h"
#include "Kek.Club+/path/goals/PathGoalXYZ.h"
#include "Kek.Club+/path/goals/PathGoalXZ.h"
#include "Kek.Club+/path/goals/PathGoalY.h"

//Modules
#include "Kek.Club+/Module/ModuleManager.h"
#include "Kek.Club+/Module/Modules/Aimbot.h"
#include "Kek.Club+/Module/Modules/AirJump.h"
#include "Kek.Club+/Module/Modules/Anchor.h"
#include "Kek.Club+/Module/Modules/AntiBot.h"
#include "Kek.Club+/Module/Modules/AntiCrystal.h"
#include "Kek.Club+/Module/Modules/AntiVoid.h"
#include "Kek.Club+/Module/Modules/ArrayList.h"
#include "Kek.Club+/Module/Modules/AutoAnvil.h"
#include "Kek.Club+/Module/Modules/AutoArmor.h"
#include "Kek.Club+/Module/Modules/AutoClicker.h"
#include "Kek.Club+/Module/Modules/AutoCrystal.h"
#include "Kek.Club+/Module/Modules/AutoEZ.h"
#include "Kek.Club+/Module/Modules/AutoGapple.h"
#include "Kek.Club+/Module/Modules/AutoLog.h"
#include "Kek.Club+/Module/Modules/AutoPot.h"
#include "Kek.Club+/Module/Modules/AutoRespawn.h"
#include "Kek.Club+/Module/Modules/AutoSneak.h"
#include "Kek.Club+/Module/Modules/AutoSprint.h"
#include "Kek.Club+/Module/Modules/AutoTotem.h"
#include "Kek.Club+/Module/Modules/AutoWalk.h"
#include "Kek.Club+/Module/Modules/AutoXP.h"
#include "Kek.Club+/Module/Modules/Bhop.h"
#include "Kek.Club+/Module/Modules/Blink.h"
#include "Kek.Club+/Module/Modules/BowAimbot.h"
#include "Kek.Club+/Module/Modules/Breadcrumbs.h"
#include "Kek.Club+/Module/Modules/Burrow.h"
#include "Kek.Club+/Module/Modules/chat.h"
#include "Kek.Club+/Module/Modules/ChestAura.h"
#include "Kek.Club+/Module/Modules/ChestStealer.h"
#include "Kek.Club+/Module/Modules/ClickGuiMod.h"
#include "Kek.Club+/Module/Modules/Compass.h"
#include "Kek.Club+/Module/Modules/Coordinates.h"
#include "Kek.Club+/Module/Modules/Crasher.h"
#include "Kek.Club+/Module/Modules/Criticals.h"
#include "Kek.Club+/Module/Modules/CrystalAura.h"
#include "Kek.Club+/Module/Modules/CrystalAuraBot.h"
#include "Kek.Club+/Module/Modules/Disabler.h"
#include "Kek.Club+/Module/Modules/EChestFarmer.h"
#include "Kek.Club+/Module/Modules/EditionFaker.h"
#include "Kek.Club+/Module/Modules/EntityFly.h"
#include "Kek.Club+/Module/Modules/ESP.h"
#include "Kek.Club+/Module/Modules/ExtendedBlockReach.h"
#include "Kek.Club+/Module/Modules/FastBow.h"
#include "Kek.Club+/Module/Modules/FastEat.h"
#include "Kek.Club+/Module/Modules/FastLadder.h"
#include "Kek.Club+/Module/Modules/FastStop.h"
#include "Kek.Club+/Module/Modules/FastSwim.h"
#include "Kek.Club+/Module/Modules/FastXP.h"
#include "Kek.Club+/Module/Modules/FluxSwing.h"
#include "Kek.Club+/Module/Modules/Fly.h"
#include "Kek.Club+/Module/Modules/FlyBypass.h"
#include "Kek.Club+/Module/Modules/FlyFO.h"
#include "Kek.Club+/Module/Modules/FollowPath.h"
#include "Kek.Club+/Module/Modules/FontChanger.h"
#include "Kek.Club+/Module/Modules/Freecam.h"
#include "Kek.Club+/Module/Modules/Freelook.h"
#include "Kek.Club+/Module/Modules/Fucker.h"
#include "Kek.Club+/Module/Modules/FullBright.h"
#include "Kek.Club+/Module/Modules/Glide.h"
#include "Kek.Club+/Module/Modules/HighJump.h"
#include "Kek.Club+/Module/Modules/Hitbox.h"
#include "Kek.Club+/Module/Modules/HiveFly.h"
#include "Kek.Club+/Module/Modules/HoleESP.h"
#include "Kek.Club+/Module/Modules/HoleFiller.h"
#include "Kek.Club+/Module/Modules/HudModule.h"
#include "Kek.Club+/Module/Modules/InstaBreak.h"
#include "Kek.Club+/Module/Modules/InventoryCleaner.h"
#include "Kek.Club+/Module/Modules/InvView.h"
#include "Kek.Club+/Module/Modules/Jesus.h"
#include "Kek.Club+/Module/Modules/Jetpack.h"
#include "Kek.Club+/Module/Modules/Keystrokes.h"
#include "Kek.Club+/Module/Modules/Killaura.h"
#include "Kek.Club+/Module/Modules/KillInsults.h"
#include "Kek.Club+/Module/Modules/MCP.h"
#include "Kek.Club+/Module/Modules/MidClick.h"
#include "Kek.Club+/Module/Modules/Module.h"
#include "Kek.Club+/Module/Modules/NameTags.h"
#include "Kek.Club+/Module/Modules/NBT.h"
#include "Kek.Club+/Module/Modules/NightMode.h"
#include "Kek.Club+/Module/Modules/NoFall.h"
#include "Kek.Club+/Module/Modules/NoFriends.h"
#include "Kek.Club+/Module/Modules/NoHunger.h"
#include "Kek.Club+/Module/Modules/NoHurtcam.h"
#include "Kek.Club+/Module/Modules/NoPacket.h"
#include "Kek.Club+/Module/Modules/NoPush.h"
#include "Kek.Club+/Module/Modules/NoRender.h"
#include "Kek.Club+/Module/Modules/NoRotate.h"
#include "Kek.Club+/Module/Modules/NoSlowDown.h"
#include "Kek.Club+/Module/Modules/NoSwing.h"
#include "Kek.Club+/Module/Modules/Notifications.h"
#include "Kek.Club+/Module/Modules/Nuker.h"
#include "Kek.Club+/Module/Modules/NukkitFly.h"
#include "Kek.Club+/Module/Modules/PacketLogger.h"
#include "Kek.Club+/Module/Modules/Phase.h"
#include "Kek.Club+/Module/Modules/Playerlist.h"
#include "Kek.Club+/Module/Modules/Radar.h"
#include "Kek.Club+/Module/Modules/RainbowSky.h"
#include "Kek.Club+/Module/Modules/Reach.h"
#include "Kek.Club+/Module/Modules/ReverseStep.h"
#include "Kek.Club+/Module/Modules/Scaffold.h"
#include "Kek.Club+/Module/Modules/ScufedEsp.h"
#include "Kek.Club+/Module/Modules/SelfTrap.h"
#include "Kek.Club+/Module/Modules/SelfWeb.h"
#include "Kek.Club+/Module/Modules/Spammer.h"
#include "Kek.Club+/Module/Modules/Speed.h"
#include "Kek.Club+/Module/Modules/Spider.h"
#include "Kek.Club+/Module/Modules/StackableItem.h"
#include "Kek.Club+/Module/Modules/Step.h"
#include "Kek.Club+/Module/Modules/StorageESP.h"
#include "Kek.Club+/Module/Modules/Surround.h"
#include "Kek.Club+/Module/Modules/SwingAnimation.h"
#include "Kek.Club+/Module/Modules/TargetHud.h"
#include "Kek.Club+/Module/Modules/Teams.h"
#include "Kek.Club+/Module/Modules/Teleport.h"
#include "Kek.Club+/Module/Modules/TestModule.h"
#include "Kek.Club+/Module/Modules/Theme.h"
#include "Kek.Club+/Module/Modules/TimeChanger.h"
#include "Kek.Club+/Module/Modules/Timer.h"
#include "Kek.Club+/Module/Modules/ToggleSounds.h"
#include "Kek.Club+/Module/Modules/Tower.h"
#include "Kek.Club+/Module/Modules/TpAura.h"
#include "Kek.Club+/Module/Modules/Tracer.h"
#include "Kek.Club+/Module/Modules/TriggerBot.h"
#include "Kek.Club+/Module/Modules/Twerk.h"
#include "Kek.Club+/Module/Modules/Velocity.h"
#include "Kek.Club+/Module/Modules/Verify.h"
#include "Kek.Club+/Module/Modules/ViewModel.h"
#include "Kek.Club+/Module/Modules/Watermark.h"
#include "Kek.Club+/Module/Modules/Waypoints.h"
#include "Kek.Club+/Module/Modules/Welcome.h"
#include "Kek.Club+/Module/Modules/Xray.h"
#include "Kek.Club+/Module/Modules/Yaw.h"
#include "Kek.Club+/Module/Modules/Zoom.h"


#endif  // PCH_H