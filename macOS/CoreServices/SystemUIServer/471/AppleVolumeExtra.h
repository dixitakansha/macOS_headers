//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemUIPlugin/NSMenuExtra.h>

@class AVOutputContext, AVOutputDeviceDiscoverySession, AppleMenuItem, AppleSoundSettings, AppleVolumeExtraTitle, AppleVolumeItemView, NSArray, NSMenu, NSMutableDictionary, NSString, NSTimer;

@interface AppleVolumeExtra : NSMenuExtra
{
    AppleVolumeItemView *_volumeItemView;
    NSMenu *_volumeMenu;
    NSMenu *_deviceMenu;
    AppleMenuItem *_volumeSliderItem;
    AppleMenuItem *_volumeTitleItem;
    AppleMenuItem *_volumeOutputTitleItem;
    AppleMenuItem *_volumeMikeyItem;
    AppleMenuItem *_volumePrefsItem;
    AppleMenuItem *_audioPortItem;
    AppleMenuItem *_inputItem;
    AppleMenuItem *_outputItem;
    AppleMenuItem *_mikeyItem;
    AppleMenuItem *_outputDevicesItem;
    AppleMenuItem *_inputDevicesItem;
    AppleMenuItem *_prefsItem;
    AppleSoundSettings *_soundSettings;
    AppleVolumeExtraTitle *_titleView;
    unsigned int _retaskableDeviceID;
    NSString *_mikeyString;
    NSString *_volumeMikeyString;
    NSArray *_nibObjects;
    AVOutputDeviceDiscoverySession *_avSession;
    AVOutputContext *_avContext;
    BOOL _volumeMenuIsOpen;
    BOOL _deviceMenuIsOpen;
    NSMutableDictionary *_wirelessMenuItemsTable;
    NSMutableDictionary *_airplayMenuItemsTable;
    NSMutableDictionary *_allSoundSources;
    int _menuLock;
    BOOL _needsMenuUpdate;
    NSTimer *_menuUpdateTimer;
}

- (BOOL)runSelfTest:(unsigned int)arg1 duration:(double)arg2;
- (void)openSoundPrefs:(id)arg1;
- (id)menu;
- (void)menuUpdateCheckTimerFired;
- (void)wirelessDevicesChanged:(id)arg1;
- (id)buildDeviceMenu;
- (void)updateDeviceMenu;
- (id)buildVolumeMenu;
- (void)updateVolumeMenu;
- (void)sortDeviceArray:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)enterDetailedMode;
- (void)leaveDetailedMode;
- (void)leaveDetailedModeAux:(id)arg1;
- (id)createWirelessItems;
- (id)createAirplayItems;
- (void)avOutputDeviceSelected:(id)arg1;
- (id)retaskableAudioPortSourceName;
- (void)retaskableModeChanged:(id)arg1;
- (void)changeInputDevice:(id)arg1;
- (void)changeOutputDevice:(id)arg1;
- (void)_updateAlertVolume:(id)arg1;
- (void)_soundSettingsChanged:(id)arg1;
- (void)refreshTitle;
- (void)closeVolumeMenu:(id)arg1;
- (BOOL)convertedForNewUI;
- (id)AXDescription;
- (void)dealloc;
- (BOOL)lazyLoadNib;
- (id)initWithBundle:(id)arg1;
- (void)_start;

@end

