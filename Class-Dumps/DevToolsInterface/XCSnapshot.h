//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSMutableDictionary, NSString;

@interface XCSnapshot : NSObject
{
    NSArray *_sourceDirs;
    NSArray *_archiveDirs;
    long long _multiRootIndex;
    NSString *_userComment;
    NSDate *_date;
    NSMutableDictionary *_userDictionary;
    BOOL _archiveInProgress;
    BOOL _archiveValid;
    NSString *_errorMessage;
}

+ (id)snapshotRepositoryRootDirectory;
+ (id)_dateFormatter;
+ (id)standardizedDirectoriesFrom:(id)arg1;
+ (id)predictiveSnapshotsIncludingSourceDir:(id)arg1;
+ (void)cleanRepository;
+ (void)stopAllPredictiveSnapshots;
+ (void)stopPredictiveSnapshotsOfDirectories:(id)arg1;
+ (void)enablePredictiveSnapshotsOfDirectories:(id)arg1;
+ (BOOL)predictiveSnapshotsEnabledForDirectories:(id)arg1;
+ (id)archivePathsForSourceDirectories:(id)arg1 date:(id)arg2;
+ (id)repositoryDirectoriesForDirectories:(id)arg1;
+ (id)archiveDirectoryName;
+ (id)snapshotFromArchiveDictionary:(id)arg1;
+ (id)newSnapshotForSourceDirectories:(id)arg1;
+ (id)sourceDirsKeyForDirectories:(id)arg1;
+ (Class)snapshotClass;
+ (id)keyPathsForValuesAffectingUserCommentAsAttributedString;
@property(nonatomic) long long multiRootIndex; // @synthesize multiRootIndex=_multiRootIndex;
- (id)repositoryDirForPath:(id)arg1;
- (id)sourceDirForPath:(id)arg1;
- (id)projectPath;
- (void)setProjectPath:(id)arg1;
- (id)projectName;
- (void)setProjectName:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)_displayRefreshForName:(id)arg1;
- (id)changeSet;
- (long long)compareDates:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)errorMessage;
- (BOOL)archiveValid;
- (void)setArchiveInProgress:(BOOL)arg1;
- (BOOL)archiveInProgress;
- (id)archiveDirs;
- (void)removeSnapshotArchive;
- (void)restoreFiles:(id)arg1;
- (void)restore;
- (void)startTakingSnapshot;
- (id)archiveStrategy;
- (void)postCopyCompleteNoticeWithErrorMessage:(id)arg1;
- (id)snapshotRepositoryDirectories;
- (id)formattedDateString;
- (id)snapshotDate;
- (void)setUserCommentAsAttributedString:(id)arg1;
- (id)userCommentAsAttributedString;
- (void)setUserComment:(id)arg1;
- (id)userComment;
- (id)sourceDirs;
- (void)_didChange;
- (id)dictionaryRepresentation;
- (id)sourceDirsKey;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSourceDirs:(id)arg1 archiveDirs:(id)arg2 comment:(id)arg3 date:(id)arg4;
- (id)initNewSnapshotWithSourceDirectories:(id)arg1;

@end
