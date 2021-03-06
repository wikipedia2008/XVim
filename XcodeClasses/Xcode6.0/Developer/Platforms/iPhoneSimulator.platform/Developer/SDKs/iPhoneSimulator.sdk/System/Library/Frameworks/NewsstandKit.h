//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/NewsstandKit.framework/NewsstandKit
// UUID: 34D4597B-6DC0-33D3-A7F0-B3FA6C528FEC
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 35.0.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@interface NKAssetDownload : NSObject
{
    NKIssue *_issue;
    NSString *_identifier;
    NSData *_userInfoData;
    NSURLRequest *_request;
    NSURLConnection *_connection;
    _Bool _attemptedConnection;
    _Bool _isDecodingValid;
}

@property _Bool attemptedConnection; // @synthesize attemptedConnection=_attemptedConnection;
@property(retain) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain) NSData *userInfoData; // @synthesize userInfoData=_userInfoData;
@property(copy) NSURLRequest *URLRequest; // @synthesize URLRequest=_request;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)downloadWithDelegate:(id)arg1;
- (void)_connectionBackgroundDownloadPostCompleted:(id)arg1;
- (void)_connectionBackgroundDownloadPreCompleted:(id)arg1;
- (_Bool)_isDecodingValid;
- (void)_cancel;
- (_Bool)_attemptedConnection;
- (id)_connection;
- (void)_setIssue:(id)arg1;
- (void)_issueWasRemovedFromLibrary;
@property(copy) NSDictionary *userInfo;
- (void)setIssue:(id)arg1;
@property(readonly) __weak NKIssue *issue; // @synthesize issue=_issue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_initWithURLRequest:(id)arg1 issue:(id)arg2;

@end

@interface NKIssue : NSObject
{
    NKLibrary *_library;
    NSString *_name;
    NSDate *_date;
    NSString *_directory;
    NSMutableArray *_assets;
    NSMapTable *_assetsByRequest;
    NSMutableSet *_resolvedAssets;
    _Bool _foundContent;
    _Bool _isDecodingValid;
}

@property(copy) NSString *directory; // @synthesize directory=_directory;
@property(copy) NSDate *date; // @synthesize date=_date;
@property(copy) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)_assetChanged:(id)arg1;
- (void)_cleanupAsset:(id)arg1;
- (void)_markAssetAsResolved:(id)arg1;
- (_Bool)_isDecodingValid;
- (id)_assetsForRequest:(id)arg1;
- (id)_directory;
- (void)_setLibrary:(id)arg1;
- (id)_library;
- (id)addAssetWithRequest:(id)arg1;
@property(readonly) long long status;
@property(readonly, copy) NSURL *contentURL;
@property(readonly, copy) NSArray *downloadingAssets;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_initWithName:(id)arg1 date:(id)arg2 directory:(id)arg3;
- (id)_commonInit;

@end

@interface NKLibrary : NSObject
{
    NSArray *_issues;
    NKIssue *_currentlyReadingIssue;
    NSMapTable *_issuesByName;
    NSMapTable *_issuesByDirectory;
    NSURL *_contentURL;
    NSFileManager *_fileManager;
    NSURL *_appSupportURL;
    NSURL *_libraryURL;
    _Bool _inited;
    int _needsSaving;
    int _savePending;
    NSArray *_assetsFromLaunch;
}

+ (_Bool)_isNewsstandApp;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedLibrary;
- (id)description;
- (void)_applicationWillTerminate:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_setIssues:(id)arg1;
@property(readonly) NSArray *issues;
- (void)_load;
- (void)_saveNowIfNeeded;
- (void)_saveIfNeeded;
- (void)_saveIfNeededAfterDelay:(double)arg1;
- (void)__actuallySave;
- (void)_markAsDirtyAndSave;
- (void)_markIssuesAndSave;
- (id)_libraryURL;
- (id)_appSupportURL;
- (void)_didFinishLaunchingWasCalled;
- (void)_performBackgroundTask:(CDUnknownBlockType)arg1 withDescription:(id)arg2;
- (void)_issueChanged:(id)arg1;
- (_Bool)_canPerformBackgroundDownloads;
- (id)_fileManager;
- (id)_issueForDirectory:(id)arg1;
- (id)_contentURL;
- (void)removeIssue:(id)arg1;
- (id)addIssueWithName:(id)arg1 date:(id)arg2;
- (id)issueWithName:(id)arg1;
@property(retain) NKIssue *currentlyReadingIssue;
@property(readonly) NSArray *downloadingAssets;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

@interface NSString (NKAssetDownload)
- (id)_issueDirectory;
@end

@interface NSURLConnection (NKAssetDownloadAdditions)
@property(readonly) __weak NKAssetDownload *newsstandAssetDownload;
@end

