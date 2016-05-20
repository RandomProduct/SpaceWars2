struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 82 classes
	//0. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//1. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//4. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//5. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//6. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//7. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//8. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//9. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//10. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//11. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//12. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//13. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//14. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//15. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//16. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//17. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//18. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//19. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//20. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//21. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//22. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//23. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//24. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//25. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//26. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//27. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//28. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//29. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//30. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//31. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//32. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//33. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//34. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//35. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//36. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//37. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//38. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//39. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//40. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//41. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//42. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//43. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//44. ConstantForce
	void RegisterClass_ConstantForce();
	RegisterClass_ConstantForce();

	//45. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//46. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//47. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//48. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//49. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//50. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//51. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//52. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//53. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//54. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//55. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//56. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//57. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//58. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//59. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//60. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//61. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//62. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//63. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//64. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//65. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//66. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//67. TrailRenderer
	void RegisterClass_TrailRenderer();
	RegisterClass_TrailRenderer();

	//68. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//69. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//70. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//71. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//72. Halo
	void RegisterClass_Halo();
	RegisterClass_Halo();

	//73. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//74. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//75. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//76. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//77. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//78. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//79. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//80. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//81. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
