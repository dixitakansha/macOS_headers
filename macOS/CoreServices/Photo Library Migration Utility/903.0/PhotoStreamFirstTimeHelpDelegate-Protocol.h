//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class AssetManagementClient, NSWindow, PhotoStreamFirstTimeHelpController;

@protocol PhotoStreamFirstTimeHelpDelegate
- (AssetManagementClient *)assetManagementClient;
- (NSWindow *)mainWindow;
- (BOOL)isBeta;
- (void)enableBothPhotoStreamsForPhotoStreamHelpController:(PhotoStreamFirstTimeHelpController *)arg1;
- (void)enablePhotoStreamForPhotoStreamHelpController:(PhotoStreamFirstTimeHelpController *)arg1;
- (void)disablePhotoStreamForPhotoStreamHelpController:(PhotoStreamFirstTimeHelpController *)arg1;
@end

