//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLSCrashReportingController, CLSInternalReport, CLSSettings, NSString;

@protocol CLSCrashReportingControllerDelegate <NSObject>
- (CLSSettings *)settingsForCrashReportingController:(CLSCrashReportingController *)arg1;
- (BOOL)isFirstInstallForCrashReportingController:(CLSCrashReportingController *)arg1;
- (NSString *)installIDForCrashReportingController:(CLSCrashReportingController *)arg1;
- (NSString *)APIKeyForCrashReportingController:(CLSCrashReportingController *)arg1;
- (BOOL)reportingController:(CLSCrashReportingController *)arg1 ensureDeliveryOfUnixSignal:(int)arg2;
- (void)reportingController:(CLSCrashReportingController *)arg1 internalDidDetectReportForLastExecution:(CLSInternalReport *)arg2;
- (void)reportingController:(CLSCrashReportingController *)arg1 didDetectReportForLastExecution:(CLSInternalReport *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (BOOL)reportingControllerMustInformDelegateOfReports:(CLSCrashReportingController *)arg1;
- (BOOL)reportingControllerCanUseBackgroundSessions:(CLSCrashReportingController *)arg1;
- (void)detectedCrash;
- (BOOL)shouldInstallCrashCallback;
@end

