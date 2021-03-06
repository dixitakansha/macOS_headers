//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AUDataModel.h"

@class NSString;

@interface AUAirPlayModel : AUDataModel
{
    BOOL enableAirPlay;
    NSString *airPlaySpeakerName;
    NSString *airPlaySpeakerPassword;
    NSString *airPlaySpeakerPasswordVerify;
    BOOL airPlaySpeakerPasswordRememberInKeychain;
    BOOL enableAirPlayOverWAN;
}

+ (id)keyPathsForValuesAffectingHomeKitEnabled;
+ (id)keyPathsForValuesAffectingEnableAirPlayControls;
@property(nonatomic) BOOL enableAirPlayOverWAN; // @synthesize enableAirPlayOverWAN;
@property(nonatomic) BOOL airPlaySpeakerPasswordRememberInKeychain; // @synthesize airPlaySpeakerPasswordRememberInKeychain;
@property(retain, nonatomic) NSString *airPlaySpeakerPasswordVerify; // @synthesize airPlaySpeakerPasswordVerify;
@property(retain, nonatomic) NSString *airPlaySpeakerPassword; // @synthesize airPlaySpeakerPassword;
@property(retain, nonatomic) NSString *airPlaySpeakerName; // @synthesize airPlaySpeakerName;
@property(nonatomic) BOOL enableAirPlay; // @synthesize enableAirPlay;
@property(readonly, nonatomic) BOOL enableAirPlayControls;
@property(readonly, nonatomic) BOOL enableEnableAirPlay;
@property(readonly, nonatomic) BOOL homeKitEnabled;
- (id)errors;
- (BOOL)valid;
- (BOOL)validateModel:(id)arg1;
- (BOOL)saveData;
- (void)loadData;
- (void)dealloc;
- (id)init;

@end

